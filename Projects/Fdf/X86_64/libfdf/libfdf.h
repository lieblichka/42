/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfdf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:19:02 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/06 19:27:38 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFDF_H
# define LIBFDF_H

# define BUFF_SIZE 100000
# define HEIGHT 1024
# define WIDTH 1280
# define TITLE "FDF"
# define RADIAN 57.2958

# include "mlx.h"
# include "libft.h"
# include <unistd.h>
# include <math.h>

typedef struct		s_coord
{
	int				x;
	int				y;
}					t_coord;

typedef struct		s_params
{
	int				angle;
	int				distance;
	int				z;
	t_coord			size;
	t_coord			start;
	t_coord			move;
}					t_params;

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

typedef struct		s_mlxbox
{
	t_mlx			**mlx_map;
	t_mlxstat		*mlx_stat;
	t_params		*params;	
}					t_mlxbox;

void				ft_del_mlx(t_mlx **amlx);
void				ft_del_mlx_map(t_mlx **mlx_m);
void				ft_show_coordinate(t_coord *point);
void				ft_show_mlx_coordinate(t_mlx *mlx);
void				ft_mlx_hooks(t_mlxbox *mlx_box);
void				ft_put_mlx_point(int x, int y, int color, t_mlxstat *s);
void				ft_put_mlx_line(t_mlx *m1, t_mlx *m2,
					t_mlxstat *s, t_params *p);
int					ft_mlx_hook_keys(int key, t_mlxbox *mlx_box);
int					ft_mlx_hook_mouse(int x, int y, t_mlxbox *mlx_box);
int					ft_fill_mlx_map(t_mlx **mlx_m, char **map);
int					ft_put_mlx_map(t_mlxbox *mlx_box);
char				**ft_valid_map(const int fd);
t_mlx				*ft_create_mlx(t_point *point);
t_mlx				**ft_create_mlx_map(char **map, t_params *p);
t_params			*ft_initialize_params(char **map);
t_mlxstat			*ft_run_mlx_window(void);
t_mlxbox			*ft_create_mlxbox(void);

#endif
