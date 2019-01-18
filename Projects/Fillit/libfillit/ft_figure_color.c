/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figure_color.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtreutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 22:42:47 by dtreutel          #+#    #+#             */
/*   Updated: 2019/01/17 23:50:28 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_figure_color(char **tetra, char c)
{
	int		i;
	int		j;

	i = -1;
	while (++i < 4 && !(j = 0))
		while (j < 4)
			if (tetra[i][j] == '#')
				tetra[i][j++] = c;
			else
				j++;
	j = 0;
	while (*(tetra + j))
		j++;
	if (*(tetra + 16) != 0)
		ft_figure_color(tetra + 16, c + 1);
}
