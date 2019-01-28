/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pixel_put_tmlx.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 23:05:14 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/28 23:27:20 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "libfdf.h"

void	ft_pixel_put_tmlx(t_mlx *mlx_ptr, int x, int y, int color)
{
	if (mlx_ptr && (*mlx_ptr).mlx && (*mlx_ptr).win)
		mlx_pixel_put((*mlx_ptr).mlx, (*mlx_ptr).win, x, y, color);
}
