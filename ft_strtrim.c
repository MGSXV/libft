/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:31:20 by sel-kham          #+#    #+#             */
/*   Updated: 2021/11/12 02:02:09 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_reverse_strchr(const char *s, int c)
{
	int		i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (1);
	if (!c)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*result;
	size_t		i;
	size_t		j;
	size_t		limit;

	i = -1;
	j = ft_strlen(s1);
	limit = 0;
	while (ft_strchr(set, s1[++i]))
		;
	while (ft_reverse_strchr(set, s1[--j]))
		limit++;
	result = ft_substr(s1, i, ft_strlen(s1) - i - limit);
	return (result);
}
