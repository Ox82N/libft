/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 11:38:02 by obenjair          #+#    #+#             */
/*   Updated: 2022/04/11 23:11:49 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)src;
	b = (unsigned char *)dest;
	i = 0;
	if (src == NULL && dest == NULL)
		return (NULL);
	if (b > a)
	{
		while (n-- > 0)
		{
			b[n] = a[n];
		}
	}
	else
	{
		while (i < n)
		{
			b[i] = a[i];
			i++;
		}
	}
	return (dest);
}
