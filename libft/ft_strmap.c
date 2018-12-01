/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutrinh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:41:39 by qutrinh           #+#    #+#             */
/*   Updated: 2018/11/24 18:41:50 by qutrinh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ns;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	ns = ft_strnew(ft_strlen((char *)s));
	if (!ns)
		return (NULL);
	while (s[i])
	{
		ns[i] = f(s[i]);
		i++;
	}
	return (ns);
}
