/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_mlx_box.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 17:36:50 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/23 17:57:32 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

void	ft_del_mlx_box(t_mlxbox *mlx_box)
{
	ft_del_mlx_map((*mlx_box).mlx_map);
	ft_memdel((void**)&(*mlx_box).mlx_map);
	ft_memdel((void**)&(*mlx_box).mlx_stat);
	ft_memdel((void**)&(*mlx_box).params);
	ft_memdel((void**)&mlx_box);
}
