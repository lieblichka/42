/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfdf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:19:02 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/23 21:03:10 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFDF_H
# define LIBFDF_H

# define BUFF_SIZE 100000
# define HEIGHT 600
# define WIDTH 800
# define TITLE "FDF"
# define RADIAN 57.2958
# define COLOR 0x1E0F3
# define RED 0x8B0000
# define GRAY 0x708090
# define GREEN 0x00FF00
# define DGRAY 0xA9A9A9

# include "mlx.h"
# include "libft.h"
# include <unistd.h>
# include <math.h>
# include <stdlib.h>

typedef struct		s_coord
{
	int				x;
	int				y;
}					t_coord;

typedef struct		s_mouse
{
	unsigned		left_button: 1;
	unsigned		right_button: 1;
	unsigned		third_button: 1;
	unsigned		scroll: 1;
	int				x;
	int				y;
}					t_mouse;

typedef struct		s_point
{
	int				x;
	int				y;
	int				z;
	int				color;
}					t_point;

typedef struct		s_mlxstat
{
	void			*mlx_ptr;
	void			*mlx_win;
}					t_mlxstat;

typedef struct		s_mlx
{
	t_point			*point;
	struct s_mlx	*next;
}					t_mlx;

typedef struct		s_params
{
	int				distance;
	int				z;
	t_coord			size;
	t_coord			start;
	t_mouse			mouse;
	t_point			axis;
}					t_params;

typedef struct		s_mlxbox
{
	t_mlx			**mlx_map;
	t_mlxstat		*mlx_stat;
	t_params		*params;
}					t_mlxbox;

void				ft_del_mlx(t_mlx **amlx);
void				ft_del_mlx_map(t_mlx **mlx_m);
void				ft_del_mlx_box(t_mlxbox *mlx_box);
void				ft_show_coordinate(t_coord *point);
void				ft_show_mlx_coordinate(t_mlx *mlx);
void				ft_mlx_hooks(t_mlxbox *mlx_box);
void				ft_mlx_rotate_x(t_mlx *mlx, t_mlx *iso, t_mlxbox *mlx_box);
void				ft_mlx_rotate_y(t_mlx *mlx, t_mlx *iso, t_mlxbox *mlx_box);
void				ft_mlx_rotate_z(t_mlx *mlx, t_mlx *iso, t_mlxbox *mlx_box);
void				ft_mlx_rotate_all(t_mlx *m1, t_mlx *m2, t_mlxbox *mlx_box);
void				ft_put_mlx_point(int x, int y, int color, t_mlxstat *s);
void				ft_put_mlx_line(t_mlx *m1, t_mlx *m2, t_mlxbox *mlx_box);
void				ft_put_mlx_vertical(t_mlxbox *mlx_box);
void				ft_put_mlx_horisontal(t_mlxbox *mlx_box);
void				ft_put_mlx_active_man(t_mlxbox *mlx_box);
int					ft_close_fdf(void *mlx_box);
int					ft_mlx_hook_keys(int key, t_mlxbox *mlx_box);
int					ft_mlx_hook_mouse(int button, int x, int y, t_mlxbox *box);
int					ft_mlx_issue_mouse(int button, int x, int y, t_mlxbox *box);
int					ft_mlx_move_mouse(int x, int y, t_mlxbox *box);
int					ft_fill_mlx_map(t_mlx **mlx_m, char **map);
int					ft_put_mlx_map(t_mlxbox *mlx_box);
char				**ft_valid_map(const int fd);
t_mlx				*ft_create_mlx(t_point *point);
t_mlx				**ft_create_mlx_map(char **map, t_params *p);
t_params			*ft_initialize_params(char **map);
t_mlxbox			*ft_create_mlxbox(void);
t_mlxstat			*ft_run_mlx_window(void);

#endif
