/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:58:33 by lohanyan          #+#    #+#             */
/*   Updated: 2022/04/28 15:27:33 by lohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dest1;
	char	*src1;
	char	area[1000];
	size_t	i;

	dest1 = (char *)dst;
	src1 = (char *)src;
	i = 0;
	while (i < n)
	{
		area[i] = src1[i];
		i++;
	}
	area[i] = '\0';
	i = 0;
	while (i < n)
	{
		dest1[i] = area[i];
		i++;
	}
	return (dst);
}
