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

	res = (char *) haystack;
	if (ft_strlen(needle) == 0)
		return (res++);
	if (ft_strlen(haystack) < ft_strlen(needle) || ft_strlen(haystack) == 0)
		return (NULL);
	i = 0;
	while (res[i] && i < len)
	{
		j = 0;
		while (needle[j] == res[i + j])
			j++;
		if (needle[j] == '\0')
			return (res + i);
		i++;
	}
	return (NULL);
}
