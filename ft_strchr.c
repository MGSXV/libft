/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:22:43 by sel-kham          #+#    #+#             */
/*   Updated: 2021/11/12 01:58:16 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*res;
	int		i;
	size_t	len;

	len = ft_strlen(s);
	i = -1;
	while (c == '\0' && s[++i])
		if (s[i + 1] == c)
			return ("\0");
	res = ft_memchr(s, c, len);
	return (res);
}
