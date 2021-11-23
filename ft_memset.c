/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:26:49 by sel-kham          #+#    #+#             */
/*   Updated: 2021/11/12 01:54:49 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	unsigned char	ch;

	s = (unsigned char *) b;
	ch = (unsigned char) c;
	while (len--)
		*s++ = ch;
	return (b);
}
