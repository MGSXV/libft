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
	int	len;

	len = (int) ft_strlen(s) + 1;
	while (--len >= 0)
		if (s[len] == (char) c)
			return ((char *)(s + len));
	return (NULL);
}
