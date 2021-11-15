/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:59:26 by sel-kham          #+#    #+#             */
/*   Updated: 2021/11/12 02:12:14 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*sub_str;

	i = start;
	str_len = ft_strlen(s);
	if (i + len > str_len)
		len = str_len - i;
	sub_str = (char *) malloc(len * sizeof(char) + 1);
	if (!sub_str)
		return (NULL);
	ft_memcpy(sub_str, s + i, len);
	sub_str[len] = '\0';
	return (sub_str);
}
