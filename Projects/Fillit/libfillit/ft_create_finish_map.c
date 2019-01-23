/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_finish_map.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtreutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 18:37:10 by dtreutel          #+#    #+#             */
/*   Updated: 2019/01/23 12:12:32 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfillit.h"

static void	ft_arrange_new_map(char **new_tetra, char **tetra)
{
	ft_strcpy(*(new_tetra + 0), *(tetra + 0));
	ft_strcpy(*(new_tetra + 1), *(tetra + 1));
	ft_strcpy(*(new_tetra + 2), *(tetra + 2));
	ft_strcpy(*(new_tetra + 3), *(tetra + 3));
	if (*(tetra + 4) != 0)
		ft_arrange_new_map(new_tetra + 16, tetra + 4);
}

static char	**ft_figures_max_map(char **tetra)
{
	char	**new_tetra;
	int		i;

	i = 0;
	while (*(tetra + i))
		i++;
	i *= 4;
	if (!(new_tetra = (char **)ft_memalloc(sizeof(char *) * (i + 1))))
		return (0);
	while (i--)
	{
		if (!(*(new_tetra + i) = (char *)ft_memalloc(sizeof(char) * 17)))
		{
			ft_arraydel((void **)new_tetra);
			ft_memdel((void**)&new_tetra);
			return (0);
		}
		ft_bzero(*(new_tetra + i), 17);
	}
	return (new_tetra);
}

static char	**ft_one_figure(char **tetra)
{
	int square;
	int i;
	int j;

	i = 0;
	square = ft_count_square(tetra);
	tetra[0][square] = '\0';
	tetra[1][square] = '\0';
	tetra[2][square] = '\0';
	tetra[3][square] = '\0';
	while (square != 4)
		ft_memdel((void**)&(tetra[square++]));
	while (*(tetra + i))
	{
		j = 0;
		while (*(*(tetra + i) + j) != '\0')
		{
			if (*(*(tetra + i) + j) == '#')
				*(*(tetra + i) + j) = 'A';
			j++;
		}
		i++;
	}
	return (tetra);
}

char		**ft_create_finish_map(char **tetra)
{
	char **tetra_new;

	tetra_new = 0;
	if (!*(tetra + 4))
		return (ft_one_figure(tetra));
	if (!(tetra_new = ft_figures_max_map(tetra)))
		return (0);
	ft_arrange_new_map(tetra_new, tetra);
	ft_arraydel((void**)tetra);
	ft_memdel((void**)&tetra);
	return (tetra_new);
}
