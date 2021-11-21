/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:03:44 by sel-kham          #+#    #+#             */
/*   Updated: 2021/11/13 01:37:50 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	rows_count(char const *s, char c)
{
	size_t	i;
	size_t	rows;

	i = 0;
	rows = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			rows++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (rows);
}

static void	optimize_code(char const *s, char c, size_t *i, size_t *row_len)
{
	*row_len = 0;
	while (s[*i] && s[*i] == c)
		(*i)++;
	while (s[*i] && s[*i] != c)
	{
		(*i)++;
		(*row_len)++;
	}
}

static char	**free_all(char **t)
{
	int	i;

	i = -1;
	while (t[++i])
		free (t[i]);
	free (t);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;
	size_t	rows;
	size_t	row_len;

	if (!s)
		return (NULL);
	rows = rows_count(s, c);
	res = (char **) malloc(sizeof(char *) * (rows + 1));
	if (!res)
		return (NULL);
	j = 0;
	i = 0;
	while (s[i] && j < rows)
	{
		optimize_code(s, c, &i, &row_len);
		res[j++] = ft_substr(s, i - row_len, row_len);
		if (!res[j - 1])
			return (free_all(res));
	}
	res[j] = NULL;
	return (res);
}
