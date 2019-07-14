/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 13:05:53 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/04 14:59:49 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		readf(const int fd, char **lst)
{
	char	src[BUFF_SIZE + 1];
	char	*addr;
	int		end;

	if (read(fd, 0, 0) == -1)
		return (0);
	while (!ft_strrchr(*lst, '\n') &&
			(end = read(fd, src, BUFF_SIZE)) > 0)
	{
		src[end] = '\0';
		addr = *lst;
		*lst = ft_strjoin(*lst, src);
		ft_memdel((void**)&addr);
		if (!*lst)
			return (0);
	}
	return (1);
}

int		readl(char **buf, char **line)
{
	char	*addr;
	char	*findn;
	int		size;

	size = ft_strlenc(*buf, '\n');
	findn = ft_strchr(*buf, '\n');
	if (size || findn)
	{
		if (!(*line = ft_strnew(size)))
			return (-1);
		ft_strncpy(*line, *buf, size);
		addr = *buf;
		if (!findn)
			ft_memdel((void**)&*buf);
		else
		{
			if (!(*buf = ft_strdup(*buf + size + 1)))
				return (-1);
			ft_memdel((void**)&addr);
		}
		return (1);
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static char *lst[10240];

	if (fd < 0 || fd > 10240 || (!lst[fd] && !(lst[fd] = ft_strnew(1))))
		return (-1);
	if (!readf(fd, &lst[fd]))
	{
		ft_memdel((void**)&lst[fd]);
		return (-1);
	}
	return (readl(&lst[fd], line));
}
