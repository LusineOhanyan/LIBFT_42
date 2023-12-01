/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:58:45 by lohanyan          #+#    #+#             */
/*   Updated: 2023/03/22 17:47:23 by lohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_list;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new_list = ft_lstlast(*lst);
	new_list->next = new;
}
