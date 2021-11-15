/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 08:20:11 by sel-kham          #+#    #+#             */
/*   Updated: 2021/11/08 11:12:53 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	i = -1;
	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	while (++i < count * size)
		ft_bzero(ptr, count * size);
	return (ptr);
}
