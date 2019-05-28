/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_mlx_window.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 21:32:19 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/05 14:16:23 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

t_mlxstat	*ft_run_mlx_window(void)
{
	t_mlxstat *s;

	if ((s = ft_memalloc(sizeof(t_mlxstat))))
	{
		(*s).mlx_ptr = mlx_init();
		(*s).mlx_win = mlx_new_window((*s).mlx_ptr, WIDTH, HEIGHT, TITLE);
		return (s);
	}
	return (0);
}
