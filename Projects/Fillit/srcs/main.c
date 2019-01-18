/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: team0420 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 08:32:51 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/17 17:18:28 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	main(int argc, char **argv)
{
	int fd;

	if (argc == 2)
	{
		fd = open(*(argv + 1), O_RDONLY);
		if (!fillit(fd))
			ft_putstr("error\n");
	}
	else
		ft_putstr("usage: fillit source_file\n");
	return (0);
}
