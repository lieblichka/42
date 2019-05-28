/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_hook_keys.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 16:41:30 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/07 10:37:22 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

int		ft_mlx_hook_keys(int key, t_mlxbox *mlx_box)
{
	ft_putnbr(key);
	if (key == 123)
		(*(*mlx_box).params).start.x -= 4;
	if (key == 124)
		(*(*mlx_box).params).start.x += 4;
	if (key == 125)
		(*(*mlx_box).params).start.y += 4;
	if (key == 126)
		(*(*mlx_box).params).start.y -= 4;
	return (1);
}
