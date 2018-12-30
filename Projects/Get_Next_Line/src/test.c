/*************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 17:51:40 by mwuckert          #+#    #+#             */
/*   Updated: 2018/12/30 18:17:56 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 10 

int		readf(const int fd, char **line)
{
	char *src;
	char *addr;

	if (!(*line = ft_strnew(1)))
		return (0);
	while (!ft_strrchr(*line, '\n') && read(fd, src = ft_strnew(BUF_SIZE), BUF_SIZE) > 0)
	{
		addr = *line;
 		if (!(*line = ft_strjoin(*line, src)))
			return (0);
		ft_memdel((void**)&addr);
		ft_memdel((void**)&src);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char *lst;
	
	if (!lst && !(lst = ft_strnew(1)))
		return (-1);
	if (!readf(fd, line))
		return (-1);
	if (ft_strrchr(*line, '\n'))
	{
		*line = ft_strjoin(lst, *line);
		lst = ft_strdup(*line + ft_strlenc(*line, '\n') + 1);
		*line = ft_strncpy(ft_strnew(ft_strlenc(*line, '\n')), *line, ft_strlenc(*line, '\n'));
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	*line;
	int		fd;
	int		i;

	i = 0;
	fd = open("files/42", O_RDONLY);
	while (++i <= ft_atoi(*(argv + argc - 1)))
	{
		get_next_line(fd, &line);
		ft_putstr(line);
	}
	return (0);
}
