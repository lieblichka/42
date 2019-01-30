/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 18:56:44 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/30 19:55:05 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"
#include "libft.h"

int	fdf(const int fd)
{
	t_mlx *mlx_ptr;

	mlx_ptr = 0;
	if (fd != 3)
		return (0);
	if (!(mlx_ptr = ft_create_tmlx(mlx_ptr, 0, 0)) ||
			!ft_create_window(mlx_ptr, 1024, 768, "HELLO"))
		return (0);
	ft_loop_tmlx(mlx_ptr);
	ft_memdel((void**)&mlx_ptr);
	return (1);
}
