/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_mlx_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 23:11:29 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/24 16:20:28 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

static void	ft_set_signs(t_coord *sign, t_coord *p1, t_coord *p2)
{
	(*sign).x = (*p1).x < (*p2).x ? 1 : -1;
	(*sign).y = (*p1).y < (*p2).y ? 1 : -1;
}

static void	ft_set_deltas(t_coord *delta, t_coord *p1, t_coord *p2)
{
	(*delta).x = ABS(((*p2).x - (*p1).x));
	(*delta).y = ABS(((*p2).y - (*p1).y));
}

static void	ft_set_points(t_coord *p1, t_coord *p2, t_mlx *m1, t_mlx *m2)
{
	(*p1).x = ((*(*m1).point).x);
	(*p1).y = ((*(*m1).point).y);
	(*p2).x = ((*(*m2).point).x);
	(*p2).y = ((*(*m2).point).y);
}

static void	ft_catch_error(t_coord *p, t_coord *e, t_coord *d, t_coord *s)
{
	if ((*e).y > (*d).y * -1)
	{
		(*e).x -= (*d).y;
		(*p).x += (*s).x;
	}
	if ((*e).y < (*d).x)
	{
		(*e).x += (*d).x;
		(*p).y += (*s).y;
	}
}

void		ft_put_mlx_line(t_mlx *m1, t_mlx *m2, t_mlxbox *m_box)
{
	t_coord p1;
	t_coord p2;
	t_coord delta;
	t_coord sign;
	t_coord error;

	ft_set_points(&p1, &p2, m1, m2);
	ft_set_deltas(&delta, &p1, &p2);
	ft_set_signs(&sign, &p1, &p2);
	error.x = delta.x - delta.y;
	if (!((*(*m1).point).color == COLOR && (*(*m2).point).color == COLOR))
		(*(*m1).point).color =
			(*(*m2).point).color = (*(*m1).point).color == COLOR
				? (*(*m2).point).color : (*(*m1).point).color;
	while ((p1.x != p2.x || p1.y != p2.y))
	{
		if (p1.x <= WIDTH && p1.x >= 0 && p1.y <= HEIGHT && p1.y >= 0)
			ft_put_mlx_point(p1.x, p1.y, m2->point->color, (*m_box).mlx_stat);
		error.y = error.x * 2;
		ft_catch_error(&p1, &error, &delta, &sign);
	}
	ft_put_mlx_point(p2.x, p2.y, m2->point->color, (*m_box).mlx_stat);
}
