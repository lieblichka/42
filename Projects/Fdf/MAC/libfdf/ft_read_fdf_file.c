/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_fdf_file.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 01:34:09 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/30 15:24:13 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

char	*ft_read_fdf_file(const int fd)
{
	char *map;
	char *buf;
	char *addr;

	while (get_next_line(fd, &buf) > 0)
	{
		addr = map;
		if (!(map = ft_strjoin(map, buf))
			return (0);
		ft_memdel((void**)&addr);
	}
	return (map);
}