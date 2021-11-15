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

void	*ft_memmove(void *dst, const void *src, unsigned long len)
{
	unsigned long	i;
	char			tmp[len];

	i = -1;
	while (++i < len)
		tmp[i] = ((char *) src)[i];
	i = -1;
	while (++i < len)
		((char *) dst)[i] = tmp[i];
	return (dst);
}
