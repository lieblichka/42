/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:19:25 by mwuckert          #+#    #+#             */
/*   Updated: 2019/04/20 18:11:28 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

int	fdf(const int fd)
{
	char	**map;
	t_mlx	**mlx_map;

	if (!(map = ft_valid_map(fd)))
		return (0);
	if (!(mlx_map = ft_create_mlx_map(map)))
		return (0);
	ft_fill_mlx_map(mlx_map, map);
	ft_del_mlx_map(mlx_map);
	ft_memdel((void**)&mlx_map);
	ft_putstr("mlx_map cleaned\n");
	return (1);
}
