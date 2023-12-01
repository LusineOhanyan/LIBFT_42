/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:11:41 by lohanyan          #+#    #+#             */
/*   Updated: 2022/04/28 14:44:27 by lohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	char	*a;
	int		i;

	a = (char *)b;
	i = 0;
	while (n != 0)
	{
		a[i] = c;
		i++;
		n--;
	}
	return (a);
}
