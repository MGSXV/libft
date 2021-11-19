/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:22:09 by sel-kham          #+#    #+#             */
/*   Updated: 2021/11/12 01:53:03 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst2;
	unsigned char	*src2;

	dst2 = (unsigned char *) dst;
	src2 = (unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	if (dst2 > src2)
		while (len--)
			dst2[len] = src2[len];
	else if (dst2 < src2)
		ft_memcpy(dst, src, len);
	return (dst);
}
