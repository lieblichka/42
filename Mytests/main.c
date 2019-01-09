/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 15:18:18 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/09 16:31:42 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		fd;

	if (argc != 2)
		return (-1);
	fd = open(*(argv + 1), O_RDONLY);
	while (get_next_line(fd, &str) == 1)
	{
		puts(str);
	}
	return (0);
}
