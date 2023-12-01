/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:28:52 by lohanyan          #+#    #+#             */
/*   Updated: 2022/05/01 16:00:50 by lohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (str2[a] == '\0')
		return ((char *)str1);
	while (str1[a] != '\0' && a + b < len)
	{
		b = 0;
		while (str1[a + b] != '\0' && str1[a + b] == str2[b] && a + b < len)
		{
			if (str2[b + 1] == '\0')
				return ((char *)str1 + a);
			b++;
		}
		a++;
	}
	return (0);
}
