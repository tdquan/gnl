/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutrinh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 13:29:38 by qutrinh           #+#    #+#             */
/*   Updated: 2018/12/01 19:42:01 by qutrinh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	get_current_file(const int fd, t_list **files)
{
	t_list			*tmp;

	tmp = *files;
	while(tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = lstnew(NULL, fd);
	ft_lstadd(files, tmp);
	return (*files);
}

int		copy_line(char *str, char **line)
{
	int				i;

	i = 0;
	while(str[i++])
		if(str[i] == '\n')
			break;
	*line = ft_strnew(i + 1);
	*line = ft_strncpy(*line, str, i);
	return (i);
}

int		get_next_line(const int fd, char **line)
{
	static t_list	*files;
	t_list			*current;
	char			tmp[BUFF_SIZE ++ 1];

	if ((fd < 0 || line == NULL || read(fd, tmp, 0) < 0))
		return (-1);
	current = get_current_file(fd, &files);
	ft_bzero(tmp1);
	while ((i = read(fd, tmp, BUFF_SIZE)))
	{
		current->content = ft_strjoin(current->content, tmp);
		if (ft_strchr(tmp, '\n'))
			break;
	}
	if (i < BUFF_SIZE && !ft_strlen(current->content))
		return (0);
	i = copy_line(current->content, line);
	return (1);
}

int		main()
{
	char 	**line;
	int		fd;

	fd = open("queen.txt", O_RDONLY);
	while (get_next_line(fd, line))
		printf("%s\n", *line);
	close(fd);
	return (0);
}
