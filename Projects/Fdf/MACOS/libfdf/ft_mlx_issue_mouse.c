/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_issue_mouse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 16:48:47 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/23 21:00:52 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

int	ft_mlx_issue_mouse(int button, int x, int y, t_mlxbox *mlx_box)
{
	(void)x;
	(void)y;
	if (button == 1)
		(*(*mlx_box).params).mouse.left_button = 0;
	if (button == 2)
		(*(*mlx_box).params).mouse.right_button = 0;
	if (button == 3)
		(*(*mlx_box).params).mouse.third_button = 0;
	return (1);
}
