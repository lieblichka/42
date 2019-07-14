/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_mlx_point.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 22:43:49 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/04 15:50:19 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

void	ft_put_mlx_point(int x, int y, int color, t_mlxstat *stat)
{
	if (stat)
		mlx_pixel_put((*stat).mlx_ptr, (*stat).mlx_win, x, y, color);
}
