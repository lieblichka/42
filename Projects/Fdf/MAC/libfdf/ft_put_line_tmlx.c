/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_line_tmlx.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 23:28:54 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/30 01:21:17 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "libfdf.h"

void		ft_put_line_tmlx(t_mlx *m, int x, int y, int color)
{
	t_straight straight;

	straight.delta_x = x - (*m).x < 0 ? (x - (*m).x) * -1 : x - (*m).x;
	straight.delta_y = y - (*m).y < 0 ? (y - (*m).y) * -1 : y - (*m).y;
	straight.sign_x = (*m).x < x ? 1 : -1;
	straight.sign_y = (*m).y < y ? 1 : -1;
	straight.delta_xy = straight.delta_x - straight.delta_y;
	ft_pixel_put_tmlx(m, x, y, color);
	while ((*m).x != x || (*m).y != y)
	{
		ft_pixel_put_tmlx(m, (*m).x, (*m).y, color);
		straight.delta_2xy = straight.delta_xy * 2;
		if (straight.delta_2xy > -straight.delta_y &&
				((*m).x += straight.sign_x))
			straight.delta_xy -= straight.delta_y;
		if (straight.delta_2xy < straight.delta_x &&
				((*m).y += straight.sign_y))
			straight.delta_xy += straight.delta_x;
	}
}
