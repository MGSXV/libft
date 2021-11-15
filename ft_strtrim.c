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

static unsigned short	is_in_start(char const *target, char const *set)
{
	unsigned short	is_in_start;
	size_t			i;

	i = -1;
	is_in_start = 1;
	if (ft_strlen(set) > ft_strlen(target))
		return (0);
	while (++i < ft_strlen(set))
		if (target[i] != set[i])
			return (0);
	return (is_in_start);
}

static unsigned short	is_in_end(char const *target, char const *set)
{
	unsigned short	is_in_end;
	size_t			t_len;
	size_t			s_len;

	is_in_end = 1;
	t_len = ft_strlen(target);
	s_len = ft_strlen(set);
	if (s_len > t_len)
		return (0);
	while (s_len)
		if (target[--t_len] != set[--s_len])
			return (0);
	return (is_in_end);
}

static size_t	result_len(char const *s1, char const *s2)
{
	if (is_in_start(s1, s2) && is_in_end(s1, s2))
		return (ft_strlen(s1) - ft_strlen(s2) * 2);
	else if (!is_in_start(s1, s2) && !is_in_end(s1, s2))
		return (ft_strlen(s1));
	return (ft_strlen(s1) - ft_strlen(s2));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	res_len;

	i = -1;
	res_len = result_len(s1, set);
	result = (char *) malloc(res_len * sizeof(char));
	if (!result)
		return (0);
	if (is_in_start(s1, set) && is_in_end(s1, set))
		while (++i < res_len)
			result[i] = s1[i + ft_strlen(set)];
	else if (!is_in_start(s1, set))
		while (++i < res_len)
			result[i] = s1[i];
	else if (!is_in_end(s1, set))
		while (++i < res_len)
			result[i] = s1[i + ft_strlen(set)];
	else
		while (++i < res_len)
			result[i] = s1[i];
	result[res_len] = '\0';
	return (result);
}
