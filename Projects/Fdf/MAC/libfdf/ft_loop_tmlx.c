/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loop_tmlx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 22:31:42 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/28 22:37:48 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "libfdf.h"

void	ft_loop_tmlx(t_mlx *mlx_ptr)
{
	if (mlx_ptr)
		mlx_loop((*mlx_ptr).mlx);
}