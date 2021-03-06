/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutrinh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 13:11:19 by qutrinh           #+#    #+#             */
/*   Updated: 2018/11/24 13:11:28 by qutrinh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c <= '9' && c >= '0') || (c <= 'z' && c >= 'a') ||
			(c <= 'Z' && c >= 'A'));
}
