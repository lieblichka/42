/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_mlx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 16:19:37 by mwuckert          #+#    #+#             */
/*   Updated: 2019/04/12 17:22:38 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_mlx	*ft_create_mlx(void *mlx_window, void *mlx_ptr)
{
	t_mlx *mlx;

	if (!(mlx = ft_memalloc(sizeof(t_mlx))))
		return (0);
	if (!(mlx_window && mlx_ptr) ||
			!(mlx.point = ft_memalloc(sizeof(t_point))))
	{
		ft_memdel((void**)&mlx);
		return (0);
	}
	(*(*mlx).point).x = 0;
	(*(*mlx).point).y = 0;
	(*(*mlx).point).z = 0;
	(*(*mlx).point).color = 0;
}
