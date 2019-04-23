/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 13:05:53 by mwuckert          #+#    #+#             */
/*   Updated: 2019/04/20 16:58:10 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		readf(const int fd, char **lst)
{
	char *src;
	char *addr;

	if (read(fd, 0, 0) == -1)
		return (0);
	while (!ft_strrchr(*lst, '\n') &&
			read(fd, src = ft_strnew(BUFF_SIZE), BUFF_SIZE) > 0)
	{
		addr = *lst;
		*lst = ft_strjoin(*lst, src);
		ft_memdel((void**)&addr);
		ft_memdel((void**)&src);
		if (!*lst)
			return (0);
	}
	if (src)
		ft_memdel((void**)&src);
	return (1);
}

int		readl(char **buf, char **line)
{
	char *addr;

	if (ft_strlenc(*buf, '\n') || ft_strchr(*buf, '\n'))
	{
		if (!(*line = ft_strnew(ft_strlenc(*buf, '\n'))))
			return (-1);
		ft_strncpy(*line, *buf, ft_strlenc(*buf, '\n'));
		addr = *buf;
		if (!ft_strrchr(*buf, '\n'))
			ft_memdel((void**)&*buf);
		else
		{
			if (!(*buf = ft_strdup(*buf + ft_strlenc(*buf, '\n') + 1)))
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
