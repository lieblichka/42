/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:19:25 by mwuckert          #+#    #+#             */
/*   Updated: 2019/04/12 23:42:47 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

int	fdf(const int fd)
{
	char **map;
	t_mlx **mlx_map;

	if (!(map = ft_valid_map(fd)))
		return (0);
	if (!(mlx_map = ft_create_mlx_map(map)))
	{
		ft_arraydel((void**)map);
		return (0);
	}
	return (1);
}
