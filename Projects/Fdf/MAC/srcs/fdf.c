/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 18:56:44 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/28 21:47:55 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"
#include "libft.h"

int	fdf(const int fd)
{
	int i;

	i = fd; 
	void *mlx;
	void *win;

	i = 2;
	mlx = mlx_init();
	win = ft_create_window(mlx, 1000, 800, "HELLO");
	mlx_loop(mlx);
	return (1);
}
