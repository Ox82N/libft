/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:30:17 by obenjair          #+#    #+#             */
/*   Updated: 2022/04/10 22:10:54 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		a;
	int		b;
	int		d;

	if (!s1)
		return (NULL);
	a = 0;
	b = ft_strlen(s1);
	d = 0;
	while (s1[a] && find(s1[a], set))
		a++;
	while (a < b && find(s1[b - 1], set))
		b--;
	ptr = (char *)malloc(sizeof(char) * (b - a + 1));
	if (!ptr)
		return (NULL);
	while (a < b)
	{
		ptr[d] = s1[a];
		d++;
		a++;
	}
	ptr[d] = '\0';
	return (ptr);
}
