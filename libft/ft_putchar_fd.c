/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutrinh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:27:15 by qutrinh           #+#    #+#             */
/*   Updated: 2018/11/24 18:27:23 by qutrinh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_putchar_unicode(wchar_t wide, int fd)
{
	char	str[5];

	ft_bzero(str, 5);
	if (wide < 128)
		write(fd, &wide, 1);
	else if (wide < 2048)
	{
		str[0] = (wide >> 6) + 192;
		str[1] = (wide & 63) + 128;
	}
	else if (wide < 65536)
	{
		str[0] = (wide >> 12) + 224;
		str[1] = ((wide >> 6) & 63) + 128;
		str[2] = (wide & 63) + 128;
	}
	else if (wide < 1114112)
	{
		str[0] = (wide >> 18) + 240;
		str[1] = ((wide >> 12) & 63) + 128;
		str[2] = ((wide >> 6) & 63) + 128;
		str[3] = (wide & 63) + 128;
	}
	if (wide >= 128)
		write(fd, &str, ft_strlen(str));
}

void			ft_putchar_fd(wchar_t c, int fd)
{
	ft_putchar_unicode(c, fd);
}
