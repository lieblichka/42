/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_params.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 19:44:32 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/06 20:12:59 by mwuckert         ###   ########.fr       */
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
	(*params).angle = 30;
	(*params).z = 2;
	(*params).distance = 20;
	(*params).start.x = 300;
	(*params).start.y = 300;
	(*params).move.x = 0;
	(*params).move.y = 0;
	return (params);
}
