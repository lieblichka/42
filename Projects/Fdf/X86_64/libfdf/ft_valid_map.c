/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:18:52 by mwuckert          #+#    #+#             */
/*   Updated: 2019/04/12 17:49:03 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

static int	ft_check_color(char **map)
{
	char *elem;

	while (*map)
	{
		elem = *map++;
		while (*elem)
 		{
			while (*elem == ' ' || ft_isalnum(*elem))
				elem++;
			if (*elem++ == ',')
			{
				if (*elem++ == '0' && *elem == 'x')
					elem++;
				while (ft_isalnum(*elem) || (*elem >= 'a' && *elem <= 'f')
					|| (*elem >= 'A' && *elem <= 'F'))
						elem++;
				if (!(*elem == ' '))
					return (0);
			}
		}
	}
	return (1);		
}

static int	ft_check_size(char **map)
{
	int	size;

	size = ft_countwordc(*map, ' ');
	while (map++ && *map)
		if (size != ft_countwordc(*map, ' '))
			return (0);
	return (1);
}

char		**ft_valid_map(const int fd)
{
	char	buf[BUFF_SIZE + 1];
	char	**map;

	ft_bzero(buf, BUFF_SIZE + 1);
	if (read(fd, buf, BUFF_SIZE) <= 0 || !(map = ft_strsplit(buf, '\n')))
		return (0);
	if (!ft_check_size(map) || !ft_check_color(map))
	{
		ft_arraydel((void**)map);
		return (0);
	}
	return (map);
}
