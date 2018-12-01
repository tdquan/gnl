/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutrinh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 13:29:38 by qutrinh           #+#    #+#             */
/*   Updated: 2018/11/26 17:35:24 by qutrinh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	if(read(fd, *line, BUFF_SIZE))
	{
		printf("%s\n", *line);
		return (1);
	}
	return (0);
}

int		main()
{
	char 	**line;
	int		fd;

	*line = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1));
	fd = open("queen.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("Error openning file.\n");
		return (fd);
	}
	while (get_next_line(fd, line))
		;
	close(fd);
	get_next_line(1, line);
	return (0);
}
