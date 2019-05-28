/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_hooks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 14:44:44 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/23 17:43:07 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

void		ft_mlx_hooks(t_mlxbox *mlx_box)
{
	mlx_hook((*(*mlx_box).mlx_stat).mlx_win, 2, 0,
			&ft_mlx_hook_keys, (void*)mlx_box);
	mlx_hook((*(*mlx_box).mlx_stat).mlx_win, 4, 0,
			&ft_mlx_hook_mouse, (void*)mlx_box);
	mlx_hook((*(*mlx_box).mlx_stat).mlx_win, 5, 0,
			&ft_mlx_issue_mouse, (void*)mlx_box);
	mlx_hook((*(*mlx_box).mlx_stat).mlx_win, 6, 0,
			&ft_mlx_move_mouse, (void*)mlx_box);
	mlx_hook((*(*mlx_box).mlx_stat).mlx_win, 17, 0,
			&ft_close_fdf, (void*)mlx_box);
	mlx_loop_hook((*(*mlx_box).mlx_stat).mlx_ptr,
			&ft_put_mlx_map, (void*)mlx_box);
	mlx_loop((*(*mlx_box).mlx_stat).mlx_ptr);
}
