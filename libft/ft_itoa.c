/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutrinh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 13:13:25 by qutrinh           #+#    #+#             */
/*   Updated: 2018/11/24 13:13:37 by qutrinh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_digit(int n)
{
	size_t	i;

	i = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char				*str;
	unsigned int		i;
	size_t				dc;

	dc = count_digit(n);
	str = ft_strnew(dc);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		i = -n;
	}
	else if (n > 0)
		i = n;
	else
		return (ft_strdup("0"));
	dc--;
	while (i > 0)
	{
		str[dc] = i % 10 + '0';
		i /= 10;
		dc--;
	}
	return (str);
}
