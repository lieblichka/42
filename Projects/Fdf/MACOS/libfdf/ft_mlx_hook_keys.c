/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_hook_keys.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 16:41:30 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/23 15:48:24 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

static int	ft_mlx_change_position(int key, t_mlxbox *mlx_box)
{
	if (key == 123)
		(*(*mlx_box).params).start.x -= 4;
	if (key == 124)
		(*(*mlx_box).params).start.x += 4;
	if (key == 125)
		(*(*mlx_box).params).start.y += 4;
	if (key == 126)
		(*(*mlx_box).params).start.y -= 4;
	return (1);
}

int			ft_mlx_hook_keys(int key, t_mlxbox *mlx_box)
{
	if (key >= 123 && key <= 126)
		return (ft_mlx_change_position(key, mlx_box));
	if (key == 53)
		return (ft_close_fdf((void*)mlx_box));
	return (1);
}
