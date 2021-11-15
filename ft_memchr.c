/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:31:51 by sel-kham          #+#    #+#             */
/*   Updated: 2021/11/12 01:54:03 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned long n)
{
	char	*str;

	str = (char *) s;
	while (n--)
		if (*str++ == (unsigned char) c)
			return (--str);
	return (NULL);
}
