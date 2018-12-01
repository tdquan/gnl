/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutrinh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:08:54 by qutrinh           #+#    #+#             */
/*   Updated: 2018/11/24 18:25:41 by qutrinh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src_cp;
	char	*dst_cp;
	size_t	i;

	i = 0;
	src_cp = (char *)src;
	dst_cp = (char *)dst;
	if (src_cp < dst_cp)
		while (((int)len - 1) >= 0)
		{
			dst_cp[len - 1] = src_cp[len - 1];
			len--;
		}
	else
		while (i < len)
		{
			dst_cp[i] = src_cp[i];
			i++;
		}
	return (dst);
}
