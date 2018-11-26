/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 22:08:26 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/21 22:19:58 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "lib.h"

int		ft_read(char *path)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (1);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	if (close(fd) == -1)
		return (1);
	return (0);
}
