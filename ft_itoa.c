/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:09:57 by sel-kham          #+#    #+#             */
/*   Updated: 2021/11/12 23:29:01 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	number_length(long int n)
{
	long int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n / 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static void	assigne_value(char *str, int *index, long int number)
{
	if (number > 9)
	{
		assigne_value(str, index, number / 10);
		assigne_value(str, index, number % 10);
	}
	else
	{
		str[*index] = 48 + number;
		(*index)++;
	}
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	int			i;
	long int	ln;

	ln = (long int) n;
	len = number_length(ln);
	i = 0;
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		i++;
		ln = -ln;
		str[0] = '-';
	}
	assigne_value(str, &i, ln);
	str[len] = '\0';
	return (str);
}
