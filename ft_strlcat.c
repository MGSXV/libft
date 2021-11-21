/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:14:18 by sel-kham          #+#    #+#             */
/*   Updated: 2021/11/11 22:33:53 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;
	size_t	d;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	d = d_len;
	i = 0;
	if (dstsize == 0 || dstsize <= d_len)
		return (dstsize + s_len);
	while (d < dstsize - 1 && src[i])
	{
		dest[d] = src[i];
		i++;
		d++;
	}
	dest[d] = '\0';
	return (d_len + s_len);
}
