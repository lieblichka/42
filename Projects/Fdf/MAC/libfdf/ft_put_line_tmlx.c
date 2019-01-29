/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_line_tmlx.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 23:28:54 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/30 00:26:43 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "libfdf.h"

void	ft_put_line_tmlx(t_mlx *m, int x, int y, int color)
{
	int delta_x;
	int delta_y;
	int sign_x;
	int sign_y;
	int error;
	int error_2;

	delta_x = x - (*m).x;
	delta_y = y - (*m).y;
	sign_x =  (*m).x < x ? 1 : -1;
	sign_y =  (*m).y < y ? 1 : -1;
	error = delta_x - delta_y;
	ft_pixel_put_tmlx(m, x, y, color);
	error_2 = 1;
	while ((*m).x != x || (*m).y != y)
	{
		ft_pixel_put_tmlx(m, (*m).x, (*m).y, color);
		error_2 *= 2;
		if (error_2 > -delta_y)
		{
			error -= delta_y;
			(*m).x += sign_x;
		}
		if (error_2 < delta_x)
		{
			error += delta_x;
			(*m).y += sign_y;
		}
	}
}
