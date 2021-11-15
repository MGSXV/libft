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

void	*ft_memcpy(void *dst, const void *src, unsigned long n)
{
	unsigned long	i;
	char			*dst2;
	char			*src2;

	i = -1;
	dst2 = (char *) dst;
	src2 = (char *) src;
	while (++i < n)
		dst2[i] = ((char *) src)[i];
	return (dst);
}
