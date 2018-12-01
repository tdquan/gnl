/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutrinh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:48:30 by qutrinh           #+#    #+#             */
/*   Updated: 2018/11/24 16:48:36 by qutrinh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (n != 0)
	{
		str1 = (unsigned char *)s1;
		str2 = (unsigned char *)s2;
		while (n > 1 && *str1 == *str2)
		{
			str1++;
			str2++;
			n--;
		}
		return (*str1 - *str2);
	}
	return (0);
}
