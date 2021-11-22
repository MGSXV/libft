/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 08:45:27 by sel-kham          #+#    #+#             */
/*   Updated: 2021/11/22 08:45:38 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!(*lst))
		return ;
	tmp = *lst;
	while (tmp)
	{
		*lst = (*lst)->next;
		ft_lstdelone(tmp, del);
		tmp = *lst;
	}
	*lst = NULL;
}
