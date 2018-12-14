/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_get_next_line.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 19:47:50 by mwuckert          #+#    #+#             */
/*   Updated: 2018/12/14 19:43:02 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		read_to_lst(int fd, F_LIST **afd_lst, char **line)
{
	char *src;

	src = 0;
	if (!((**afd_lst).to_str) && ((**afd_lst).to_str = ft_strnew(1)))
		while (read(fd, src = ft_strnew(BUF_SIZE), BUF_SIZE) > 0)
			(**afd_lst).to_str = ft_strjoin((**afd_lst).to_str, src);
	if (src)
		ft_memdel((void**)&src);
	if ((**afd_lst).to_str)
	{
		ft_strncpy(*line, (**afd_lst).to_str,
				ft_strlenc((**afd_lst).to_str, '\n'));
		(**afd_lst).to_str += ft_strlenc((**afd_lst).to_str, '\n') + 1;
		return (1);
	}
	return (*(**afd_lst).to_str == 0 ? 0 : 1);
}

static F_LIST	*find_fd_lst(int fd, F_LIST **afd_lst)
{
	F_LIST *fd_lst;

	fd_lst = *afd_lst;
	if (afd_lst && *afd_lst)
	{
		if (fd == (**afd_lst).fd)
			return (*afd_lst);
		else if ((**afd_lst).next)
			find_fd_lst(fd, (F_LIST**)&(**afd_lst).next);
	}
	return (fd_lst);
}

int				new_get_next_line(const int fd, char **line)
{
	static F_LIST *fd_lst;
	
	if (fd > 2 && !fd_lst)
	{
 		if (!(fd_lst = (F_LIST)ft_memalloc(sizeof(F_LIST))))
			return (-1);
		(*fd_lst).fd = fd;
	}
	else if (fd > 2 && fd_lst)
	{
		if (find_fd_lst(fd, &fd_lst))
			
		else if (read_to_lst(fd, &fd_lst, line))
			return (1);
		else
			return (0);
	}
	return (-1);			
}
