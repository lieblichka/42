/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_mlx_map.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 17:53:49 by mwuckert          #+#    #+#             */
/*   Updated: 2019/04/12 23:42:49 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

static int		ft_determine_size_map(char **map)
{
	int i;

	i = 0;
	while (*map++)
		i++;
	return (i);
}

static t_mlx	*ft_addvalue_to_mlx_map(char **map, int size,  t_mlx *mlx_map)
{
	char **value_line;

	if (!(value_line = ft_strsplit(*map, ' ')))
	{
		ft_arraydel((void**)value_line);
		return (0);
	}
	while (*value_line)
		
}

t_mlx			**ft_create_mlx_map(char **map)
{
	int		i;
	int		size_value_list;
	char	**line;
	t_mlx	**mlx_map;

	size_value_list = ft_countwordc(*map);
	if (!(mlx_map = ft_memalloc(sizeof(t_mlx**))) *
			(ft_determine_size_map + 1))
		return (0);
	i = 0;
	while (*map)
	{
		mlx_map++ = ft_addvalue_to_mlx_map(map++, size_value_list,
				*(mlx_map + i++)); 
	}
	return ();
}
