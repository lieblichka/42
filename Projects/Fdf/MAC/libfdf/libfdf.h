/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfdf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 19:14:13 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/28 20:09:48 by mwuckert         ###   ########.fr       */
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

int				*ft_create_window(void *mlx, int width, int height, char *title);

#endif
