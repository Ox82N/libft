/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 09:54:03 by obenjair          #+#    #+#             */
/*   Updated: 2022/04/11 23:11:58 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	b;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	b = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ptr[i] = b;
		i++;
	}
	return (str);
}
