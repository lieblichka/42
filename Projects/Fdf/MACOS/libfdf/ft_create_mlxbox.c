/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_mlxbox.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 17:59:45 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/06 18:02:16 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

t_mlxbox	*ft_create_mlxbox(void)
{
	t_mlxbox *mlx_box;

	if ((mlx_box = ft_memalloc(sizeof(t_mlxbox))))
	{
		(*mlx_box).mlx_map = 0;
		(*mlx_box).mlx_stat = 0;
		(*mlx_box).params = 0;
		return (mlx_box);
	}
	return (0);
}
