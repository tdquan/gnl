/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutrinh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 13:29:38 by qutrinh           #+#    #+#             */
/*   Updated: 2018/12/01 22:23:59 by qutrinh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	*get_current_file(const int fd, t_list **files)
{
	t_list			*tmp;

	tmp = *files;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("\0", fd);
	ft_lstadd(files, tmp);
	tmp = *files;
	return (tmp);
}

int		copy_line(char *str, char **line)
{
	int				i;

	i = 0;
	while(str[i])
	{
		if(str[i] == '\n')
			break;
		i++;
	}
	*line = ft_strnew(i);
	*line = ft_strncpy(*line, str, i);
	return (i);
}

t_list	*del_str(t_list *current, int i)
{
	char			*tmp;

	if (i < (int)ft_strlen(current->content))
	{
		tmp = current->content;
		current->content = ft_strdup(current->content + i + 1);
		ft_strdel(&tmp);
	}
	else
		ft_strclr(current->content);
	return (current);
}

int		get_next_line(const int fd, char **line)
{
	static t_list	*files;
	t_list			*current;
	char			tmp[BUFF_SIZE + 1];
	char			*tmp2;
	int				i;

	if ((fd < 0 || line == NULL || read(fd, tmp, 0) < 0))
		return (-1);
	current = get_current_file(fd, &files);
	while ((i = read(fd, tmp, BUFF_SIZE)))
	{
		tmp[i] = 0;
		tmp2 = current->content;
		current->content = ft_strjoin(current->content, tmp);
		ft_strdel(&tmp2);
		if (ft_strchr(tmp, '\n'))
			break;
	}
	if (i < BUFF_SIZE && !ft_strlen(current->content))
		return (0);
	i = copy_line(current->content, line);
	current = del_str(current, i);
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
