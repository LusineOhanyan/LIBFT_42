/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:48:58 by lohanyan          #+#    #+#             */
/*   Updated: 2022/04/30 15:18:17 by lohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int n)
{
	int	count;

	count = 1;
	if (n < 0)
		count++;
	while (n / 10 != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int num)
{
	char		*str;
	int			nish;
	long int	n;

	n = num;
	nish = count(n);
	str = (char *) malloc((nish + 1) * sizeof(char));
	str[nish] = '\0';
	if (num < 0)
		n = -n;
	while (nish > 1)
	{
		nish--;
		str[nish] = n % 10 + '0';
		n = n / 10;
	}
	if (num < 0)
		str[0] = '-';
	else
		str[0] = n % 10 + '0';
	return (str);
}
