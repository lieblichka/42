/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfdf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:19:02 by mwuckert          #+#    #+#             */
/*   Updated: 2019/04/12 18:36:43 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFDF_H
# define LIBFDF_H

# define BUFF_SIZE 100000

# include "libft.h"
# include <unistd.h>

typedef struct	s_point
{
	int			x;
	int			y;
	int			z;
	int			color;
}				t_point;

typedef struct	s_mlx
{
	t_point		*point;
	void		*mlx_window;
	void		*mlx_ptr;
}				t_mlx;

char			**ft_valid_map(const int fd);
t_mlx			**ft_create_mlx_map(char **map);
t_mlx			*ft_create_mlx(void *mlx_window, void *mlx_ptr);

#endif
