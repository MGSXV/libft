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
	char	*concatenated;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	concatenated = dest;
	i = 0;
	if (dstsize < d_len || dstsize == 0)
		return (dstsize + d_len);
	while (i < dstsize - d_len - 1 && i < s_len)
	{
		concatenated[d_len + i] = src[i];
		i++;
	}
	i = d_len + s_len - 2;
	while (++i < dstsize - d_len - s_len - 1)
		concatenated[d_len + i] = '\0';
	return (d_len + s_len);
}
