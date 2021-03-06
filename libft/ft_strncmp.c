/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutrinh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:43:15 by qutrinh           #+#    #+#             */
/*   Updated: 2018/11/24 18:43:20 by qutrinh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] && s2[i]) && (i < n - 1) && s1[i] == s2[i])
		i++;
	if (n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
