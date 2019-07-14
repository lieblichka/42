/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_mlx_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 20:25:30 by mwuckert          #+#    #+#             */
/*   Updated: 2019/04/23 20:25:33 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

void	ft_del_mlx_map(t_mlx **mlx_map)
{
	if (mlx_map && *mlx_map)
	{
		if (*(mlx_map + 1))
			ft_del_mlx_map(mlx_map + 1);
		ft_del_mlx(mlx_map);
	}
}
