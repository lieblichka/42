/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfdf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:19:02 by mwuckert          #+#    #+#             */
/*   Updated: 2019/04/16 20:55:17 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFDF_H
# define LIBFDF_H

# define BUFF_SIZE 100000
# define HEIGHT 700
# define WIDTH 1000
# define TITLE "FDF"

# include "libft.h"
# include "mlx.h"
# include <unistd.h>

typedef struct		s_point
{
	int				x;
	int				y;
	int				z;
	int				color;
}					t_point;

typedef struct		s_mlx_status
{
	void			*mlx_win;
	void			*mlx_ptr;
}					t_mlx_status;

typedef struct		s_mlx
{
	t_point			*point;
	t_mlx_status	*status;
	struct s_mlx	*next;
}					t_mlx;

void				ft_del_mlx(t_mlx **mlx);
void				ft_del_mlx_elem(t_mlx **amlx);
void				ft_fill_mlx_map(t_mlx **mlx_map, char **map, int i);
char				**ft_valid_map(const int fd);
t_mlx				*ft_create_mlx(t_point *point);
t_mlx				**ft_create_mlx_map(char **map);
t_mlx_status		*ft_run_mlx_window(void);

#endif
