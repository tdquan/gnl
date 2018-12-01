/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutrinh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:45:30 by qutrinh           #+#    #+#             */
/*   Updated: 2018/11/24 18:45:57 by qutrinh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	word_count(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			n++;
		i++;
	}
	if (s[0] != c)
		return (n + 1);
	return (n);
}

static	int	char_count(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	if (!s || !c || (!(arr = (char **)malloc(sizeof(char *) *
						(word_count(s, c) + 1)))))
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			j = 0;
			if (!(arr[i] = (char *)malloc(sizeof(char) *
							(char_count(s, c) + 1))))
				return (NULL);
			while (*s != c && *s)
				arr[i][j++] = *s++;
			arr[i++][j] = '\0';
		}
	}
	arr[i] = 0;
	return (arr);
}
