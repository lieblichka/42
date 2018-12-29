/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 17:28:53 by mwuckert          #+#    #+#             */
/*   Updated: 2018/12/28 22:50:23 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft.h"
#include <unistd.h>

#define BUF_SIZE 4


int		get_next_line(const int fd, char **line)
{
	char *src;
	static char *all;

	src = 0;
	if (!all)
		all = ft_strnew(1);
	if (fd > 2)
		while (read(fd, src = ft_strnew(BUF_SIZE), BUF_SIZE) > 0)
	 		all = ft_strjoin(all, src);
	if (src)
		ft_memdel((void**)&src);
	if (all)
	{
		ft_strncpy(*line, all, ft_strlenc(all, '\n'));
		all += ft_strlenc(all, '\n') + 1;
	}
	return (*all == 0 ? 0 : 1);
}

int	main(int argc, char **argv )
{
	int fd;
	char *line;
	char *get;
	int count;

	get = "get";
	count = 0;
	if (argc < 2)
		return (1);
	line = ft_memalloc(sizeof(char) * 15 + 1);
	fd = open("42", O_RDONLY);
	if (argc == 2 && (count = ft_atoi(argv[1])))
		while (count--)
		{
			if (get_next_line(fd, &line))
			{
				ft_putstr(":");
				ft_putstr(line);
				ft_putstr("|\n");
			}
			else
			{
				ft_putstr("EOF");
				count = 0;
			}
		}
	else if (argc == 3)
		get_next_line(fd, &line);
	return (0);
}
