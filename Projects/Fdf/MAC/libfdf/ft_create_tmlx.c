/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_mlx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 22:00:13 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/28 22:41:56 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"
#include "libft.h"

t_mlx	*ft_create_tmlx(t_mlx *mlx_ptr, int x, int y)
{
	if ((x >= 0 && y >= 0) && (mlx_ptr = ft_memalloc(sizeof(t_mlx))))
	{
		if (((*mlx_ptr).mlx = mlx_init()))
		{
			(*mlx_ptr).x = x;
			(*mlx_ptr).y = y;
			(*mlx_ptr).win = 0;
			return (mlx_ptr);
		}
		ft_memdel((void**)&mlx_ptr);
	}
	return (0);
}
