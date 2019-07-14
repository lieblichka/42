/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_mlx_coordinate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 14:11:58 by mwuckert          #+#    #+#             */
/*   Updated: 2019/04/29 10:47:10 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

void	ft_show_mlx_coordinate(t_mlx *mlx)
{
	ft_putnbr((*(*mlx).point).x);
	ft_putchar(',');
	ft_putnbr((*(*mlx).point).y);
	ft_putchar(',');
	ft_putnbr((*(*mlx).point).z);
	ft_putchar(' ');
}
