/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutrinh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:47:08 by qutrinh           #+#    #+#             */
/*   Updated: 2018/11/24 16:47:45 by qutrinh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sc;

	i = 0;
	sc = (unsigned char *)s;
	if (n > 0)
	{
		while (i < n)
		{
			if (*(sc + i) == (unsigned char)c)
				return ((void *)s + i);
			i++;
		}
	}
	return (NULL);
}
