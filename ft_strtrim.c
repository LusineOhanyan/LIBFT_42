/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:18:35 by lohanyan          #+#    #+#             */
/*   Updated: 2022/04/29 17:50:55 by lohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_trim( int z, int g, const char *str)
{
	char	*s1;
	int		i;

	i = 0;
	s1 = (char *)malloc((g - z + 2) * sizeof(char));
	if (!s1)
		return (0);
	while (z <= g)
	{
		s1[i] = str[z];
		i++;
		z++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		a;
	int		b;

	i = 0;
	a = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s1[a] && s1[a++])
			i = 0;
		else
			i++;
	}
	b = ft_strlen(s1) - 1;
	i = 0;
	while (set[i] != '\0' && b >= a)
	{
		if (set[i] == s1[b] && s1[b--])
			i = 0;
		else
			i++;
	}
	return (ft_trim(a, b, s1));
}
