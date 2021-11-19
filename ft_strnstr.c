/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:44:45 by sel-kham          #+#    #+#             */
/*   Updated: 2021/11/06 15:52:46 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*res;
	size_t	h_len;
	size_t	n_len;

	h_len = ft_strlen(haystack);
	n_len = ft_strlen(needle);
	res = (char *) haystack;
	if (!n_len)
		return (res++);
	if (h_len < n_len)
		return (NULL);
	i = -1;
	while (res[++i] && i < len)
	{
		j = 0;
		while (needle[j] == res[i + j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return (res + i);
		}
	}
	return (NULL);
}
