/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutrinh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:46:38 by qutrinh           #+#    #+#             */
/*   Updated: 2018/11/24 18:46:42 by qutrinh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	c;
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	if (!*s)
		return (ft_strdup(""));
	c = ft_strlen((char *)s) - 1;
	while (s[c] == ' ' || s[c] == '\n' || s[c] == '\t')
		c--;
	str = ft_strnew(c + 1);
	if (!str)
		return (NULL);
	while (s[i] && i <= c)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
