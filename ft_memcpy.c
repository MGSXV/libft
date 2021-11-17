/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:21:27 by sel-kham          #+#    #+#             */
/*   Updated: 2021/11/12 01:51:59 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char			*dst2;
	char			*src2;

	i = -1;
	if (!dst && !src)
		return (NULL);
	dst2 = (char *) dst;
	src2 = (char *) src;
	while (++i < n)
		dst2[i] = src2[i];
	return (dst);
}
