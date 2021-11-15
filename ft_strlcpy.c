/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:03:29 by sel-kham          #+#    #+#             */
/*   Updated: 2021/11/08 11:35:11 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	i;
	char	*coppied;

	coppied = dst;
	s_len = ft_strlen(src);
	i = 0;
	if (!dstsize)
		return (s_len);
	while (i < s_len && i < dstsize)
	{
		coppied[i] = src[i];
		i++;
	}
	coppied[i] = '\0';
	while (++i < dstsize - 1)
		coppied[i] = '\0';
	return (s_len);
}
