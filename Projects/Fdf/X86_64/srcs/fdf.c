/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:19:25 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/06 18:35:05 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

int	fdf(const int fd)
{
	char			**map;
	t_mlxbox		*mlx_box;

	if (!(map = ft_valid_map(fd)))
		return (0);
	if (!(mlx_box = ft_create_mlxbox()))
		return (0);
	if (!((*mlx_box).params = ft_initialize_params(map)))
		return (0);
	if (!((*mlx_box).mlx_map = ft_create_mlx_map(map, (*mlx_box).params)))
		return (0);
	if (!ft_fill_mlx_map((*mlx_box).mlx_map, map))
		return (0);
	if (!((*mlx_box).mlx_stat = ft_run_mlx_window()))
		return (0);
	ft_mlx_hooks(mlx_box);
	mlx_loop((*(*mlx_box).mlx_stat).mlx_ptr);
	//ft_del_mlx_map(mlx_map);
	//ft_memdel((void**)&mlx_map);
	//ft_memdel((void**)&mlx_status);
	//ft_memdel((void**)&params);
	return (1);
}
