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
	size_t	f_len;
	size_t	i;

	s_len = ft_strlen(src);
	f_len = 0;
	i = -1;
	if (!dstsize)
		return (s_len);
	if (dstsize <= s_len)
		f_len = dstsize - 1;
	else
		f_len = s_len;
	while (++i < f_len)
		dst[i] = src[i];
	dst[i] = '\0';
	return (s_len);
}
