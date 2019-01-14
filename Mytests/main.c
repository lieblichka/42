/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 15:18:18 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/14 09:08:14 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>
#include <time.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		fd;
	clock_t tic = clock();

	if (argc != 2)
		return (-1);
	fd = open(*(argv + 1), O_RDONLY);
	while (get_next_line(fd, &str) == 1)
	{
		puts(str);
		ft_memdel((void**)&str);
	}

	clock_t toc = clock();
	
	printf("Running time for your program: %f", (double)(toc - tic) / CLOCKS_PER_SEC);
	return (0);
}
