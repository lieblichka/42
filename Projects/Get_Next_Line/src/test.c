/*************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 17:51:40 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/05 19:34:30 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 100

int		readf(const int fd, char **lst)
{
	char *src;
	char *addr;

	while (!ft_strrchr(*lst, '\n') && read(fd, src = ft_strnew(BUF_SIZE), BUF_SIZE) > 0)
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
	static char *lst;

	if (!lst && !(lst = ft_strnew(1)))
		return (-1);
	if (!readf(fd, &lst))
		return (-1);
	if (ft_strlenc(lst, '\n'))
	{
		if (!(*line = ft_strnew(ft_strlenc(lst, '\n'))))
			return (-1);
		ft_strncpy(*line, lst, ft_strlenc(lst, '\n'));
		lst = ft_strdup(lst + ft_strlenc(lst, '\n') + 1);
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	*line;
	int		fd;
	int		i;

	i = 0;
	if (argc != 3)
		return (1);
	fd = open(argv[1], O_RDONLY);
	while (++i <= ft_atoi(*(argv + argc - 1)))
	{
		get_next_line(fd, &line);
		ft_putstr(line);
	}
	return (0);
}
