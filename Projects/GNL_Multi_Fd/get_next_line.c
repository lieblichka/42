/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 13:05:53 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/11 12:20:10 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		readf(const int fd, char **lst)
{
	char *src;
	char *addr;

	if (fd < 0 || read(fd, 0, 0) == -1)
		return (0);
	while (!ft_strrchr(*lst, '\n') &&
			read(fd, src = ft_strnew(BUFF_SIZE), BUFF_SIZE) > 0)
	{
		addr = *lst;
		if (!(*lst = ft_strjoin(*lst, src)))
			return (0);
		ft_memdel((void**)&addr);
		ft_memdel((void**)&src);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char *lst[10240];
	char		*addr;

	if (fd < 0 || (!lst[fd] && !(lst[fd] = ft_strnew(1))))
		return (-1);
	if (!readf(fd, &lst[fd]))
	{
		ft_memdel((void**)&lst[fd]);
		return (-1);
	}
	if (ft_strlenc(lst[fd], '\n') || ft_strrchr(lst[fd], '\n'))
	{
		if (!(*line = ft_strnew(ft_strlenc(lst[fd], '\n'))))
			return (-1);
		ft_strncpy(*line, lst[fd], ft_strlenc(lst[fd], '\n'));
		addr = lst[fd];
		if (!(lst[fd] = ft_strdup(lst[fd] + ft_strlenc(lst[fd], '\n') + 1)) &&
				ft_strrchr(lst[fd], '\n'))
			return (-1);
		ft_memdel((void**)&addr);
		return (1);
	}
	return (0);
}
