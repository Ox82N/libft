/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 10:22:59 by obenjair          #+#    #+#             */
/*   Updated: 2022/04/13 04:33:11 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned int	i;

	i = 0;
	ptr = (unsigned char *)s;
	if (s == NULL && n == 0)
	{
		return (NULL);
	}
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return (&(ptr[i]));
		}
		i++;
	}
	return (NULL);
}
