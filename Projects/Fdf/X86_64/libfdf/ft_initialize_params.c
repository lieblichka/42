/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_params.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 19:44:32 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/24 20:41:24 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

static int	ft_sizeof_map(char **map)
{
	int	length;

	length = 0;
	while (*map++)
		length++;
	return (length);
}

t_params	*ft_initialize_params(char **map)
{
	t_params *params;

	if (!(params = ft_memalloc(sizeof(t_params))))
	{
		ft_twodarraydel((void**)map);
		return (0);
	}
	(*params).size.x = ft_countwordc(*map, ' ');
	(*params).size.y = ft_sizeof_map(map);
	(*params).z = 4;
	(*params).distance = (WIDTH + HEIGHT / 2) /
		((*params).size.x + (*params).size.y);
	(*params).start.x = 600;
	(*params).start.y = 600;
	(*params).axis.x = -30;
	(*params).axis.y = -30;
	(*params).axis.z = 30;
	(*params).mouse.left_button = 0;
	(*params).mouse.right_button = 0;
	(*params).mouse.third_button = 0;
	return (params);
}
