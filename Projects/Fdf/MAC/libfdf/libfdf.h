/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfdf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 19:14:13 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/30 18:05:03 by mwuckert         ###   ########.fr       */
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

typedef struct	s_mlx_math
{
	int			delta_x;
	int			delta_y;
	int			sign_x;
	int			sign_y;
	int			delta_xy;
	int			delta_2xy;
}				t_straight;

void			ft_loop_tmlx(t_mlx *mlx_ptr);
void			ft_set_pos_tmlx(t_mlx *mlx_ptr, int x, int y);
void			ft_put_line_tmlx(t_mlx *mlx_ptr, int x, int y, int color);
void			ft_pixel_put_tmlx(t_mlx *mlx_ptr, int x, int y, int color);
char			*ft_read_fdf_file(const int fd);
int				**ft_treatment_fdf_file(const int fd);
t_mlx			*ft_create_tmlx(t_mlx *mlx_ptr, int x, int y);
t_mlx			*ft_create_window(t_mlx *mlx_ptr, int w, int h, char *title);

#endif
