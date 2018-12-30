/*************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 17:51:40 by mwuckert          #+#    #+#             */
/*   Updated: 2018/12/30 15:40:31 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1

int		readf(const int fd, char **line)
{
	static char *lst;
	char *src;
	char *addr;

	if (!(*line = ft_strnew(1)))
		return (-1);
	else if (!lst && !(lst = ft_strnew(1)))
		return (-1);
	while (!ft_strrchr(*line, '\n') && read(fd, src = ft_strnew(BUF_SIZE), BUF_SIZE) > 0)
	{
		addr = *line;
 		if (!(*line = ft_strjoin(*line, src)))
			return (-1);
		ft_memdel((void**)&addr);
		ft_memdel((void**)&src);
	}
	if (ft_strrchr(*line, '\n'))
	{
		addr = *line;
		*line = ft_strjoin(lst, *line);
		ft_memdel((void**)&addr);
		lst = ft_strdup(*line + ft_strlenc(*line, '\n'));
		addr = *line;
		*line = ft_strncpy(ft_strnew(ft_strlenc(*line, '\n')),
				*line, ft_strlenc(*line, '\n'));
		ft_memdel((void**)&addr);
		return (1);
	}
	return (0);
}

int		main(void)
{
	char	*line;
	char	*addr;
	int		read;
	int		fd;
	int		fd2;

	read  = 1;
	line = ft_strnew(1);
	addr = line;
	fd = open("files/42", O_RDONLY);
	fd2 = open("files/42", O_RDONLY);	
	while (read)
	{
		read = readf(fd, &line);
		ft_putstr(line);
	}
	ft_memdel((void**)&addr);
	return (0);
}
