/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_mlx_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 20:25:57 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/23 19:09:33 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

static int	ft_get_mlx_color(char *swcolor)
{
	while (*swcolor)
		if (*swcolor++ == 'x')
			return (ft_atoi_base(swcolor, 16));
	return (COLOR);
}

static void	ft_fill_mlx(t_mlx *mlx, char **line, int i)
{
	int j;

	j = -1;
	while (*(line + ++j))
	{
		(*(*mlx).point).x = j;
		(*(*mlx).point).y = i;
		(*(*mlx).point).z = ft_atoi(*(line + j));
		(*(*mlx).point).color = ft_get_mlx_color(*(line + j));
		mlx = (t_mlx*)(*mlx).next;
	}
}

int			ft_fill_mlx_map(t_mlx **mlx_map, char **map)
{
	int			i;
	char		**line;

	i = -1;
	while (*(map + ++i))
	{
		if (!(line = ft_strsplit(*(map + i), ' ')))
			return (0);
		ft_fill_mlx(*(mlx_map + i), line, i);
		ft_twodarraydel((void**)line);
	}
	ft_twodarraydel((void**)map);
	return (1);
}
