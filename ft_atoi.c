/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:02:36 by lohanyan          #+#    #+#             */
/*   Updated: 2022/10/04 16:18:07 by lohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	index;
	int	sign;
	int	value;

	index = 0;
	sign = 1;
	value = 0;
	while (str[index] == 32 || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = -sign;
		index++;
	}	
	while (str[index] >= '0' && str[index] <= '9')
	{
		value = value * 10 + str[index] - '0';
		index++;
	}
	return (sign * value);
}
