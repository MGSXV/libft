/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 09:59:16 by sel-kham          #+#    #+#             */
/*   Updated: 2021/11/12 02:00:50 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*res;
	int		i;

	res = (char *) s;
	len = ft_strlen(s);
	i = len;
	if (c == '\0' && res[len] == c)
		return ("\0");
	while (--len)
		if (c == res[--i])
			return (&res[i]);
	return (NULL);
}
