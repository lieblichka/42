/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatment_fdf_file.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:28:59 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/30 18:17:04 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

static int		ft_count_length_x(char *fdf_map)
{
	int i;

	i = 0;
	while (*fdf_map != '\n')
		if ((*fdf_map >= 48 && *fdf_map <= 57) & *fdf_map & i++)
			while (*fdf_map != ' ' && *fdf_map != '\n')
				fdf_map++;
	return (i);
}

int				**ft_treatment_fdf_file(const int fd)
{
	char *fdf_map;

	if (!(fdf_map = ft_read_fdf_file(fd)))
		return (0);
}
