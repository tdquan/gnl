/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutrinh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:41:06 by qutrinh           #+#    #+#             */
/*   Updated: 2018/11/24 18:41:15 by qutrinh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	r;

	i = 0;
	j = ft_strlen(dst);
	if (size < (size_t)ft_strlen(dst) + 1)
		return ((size_t)ft_strlen((char *)src) + size);
	r = ft_strlen((char *)src) + ft_strlen(dst);
	if (size > (size_t)ft_strlen(dst) + 1)
	{
		k = (int)size - ft_strlen(dst) - 1;
		while ((int)k > 0)
		{
			dst[j++] = src[i++];
			k--;
		}
		dst[j] = '\0';
	}
	return (r);
}
