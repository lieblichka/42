/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfdf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 19:14:13 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/28 22:37:34 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFDF_H
# define LIBFDF_H

# include "mlx.h"

typedef struct	s_mlx_coordinate
{
	void		*win;
	void		*mlx;
	int			x;
	int			y;
}				t_mlx;

void			ft_loop_tmlx(t_mlx *mlx_ptr);
t_mlx			*ft_create_tmlx(t_mlx *mlx_ptr, int x, int y);
t_mlx			*ft_create_window(t_mlx *mlx_ptr, int w, int h, char *title);

#endif
