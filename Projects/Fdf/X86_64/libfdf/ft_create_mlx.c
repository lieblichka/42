/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_mlx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 23:09:58 by mwuckert          #+#    #+#             */
/*   Updated: 2019/04/19 23:10:00 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

t_mlx	*ft_create_mlx(t_point *point)
{
	t_mlx *mlx;

	if (point)
		if ((mlx = ft_memalloc(sizeof(t_mlx))))
		{
			if (((*mlx).point = ft_memalloc(sizeof(t_point))))
			{
				(*(*mlx).point).x = (*point).x;
				(*(*mlx).point).y = (*point).y;
				(*(*mlx).point).z = (*point).z;
				(*(*mlx).point).color = (*point).color;
				(*mlx).next = 0;
				return (mlx);
			}
			else
			{
				ft_memdel((void**)&mlx);
				return (0);
			}
		}
	return (0);
}
