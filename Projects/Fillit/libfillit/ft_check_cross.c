/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_cross.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtreutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 05:11:57 by dtreutel          #+#    #+#             */
/*   Updated: 2019/01/18 05:29:09 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_cross(char **figure_1, char **figure_2, int i)
{
	int	j;


	j = 0;
	while (j < ft_strlen(*tetra))
		if (*(*(figure_1 + i) + j) + *(*(figure_2 + i) + j)
			!= *(*(figure_1 + i) + j) + '.' && *(*(figure_1)) != '\0')
		return (0);
	return (ft_check_cross(figure_1, figure_2, i - 1));

}
