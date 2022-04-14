/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 16:01:15 by obenjair          #+#    #+#             */
/*   Updated: 2022/04/12 03:58:18 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;
	unsigned char	b;
	size_t			i;

	i = 0;
	a = (unsigned char *)s;
	b = '\0';
	while (i < n)
	{
	a[i] = b;
	i++;
	}
}
