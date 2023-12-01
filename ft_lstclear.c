/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:00:12 by lohanyan          #+#    #+#             */
/*   Updated: 2023/03/12 19:17:27 by lohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*n;

	if (!del)
		return ;
	while (lst && *lst)
	{
		n = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = n;
	}
}
