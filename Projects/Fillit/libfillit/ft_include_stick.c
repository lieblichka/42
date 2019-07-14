/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_include_stick.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtreutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:11:48 by dtreutel          #+#    #+#             */
/*   Updated: 2019/01/22 20:16:59 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int	ft_include_stick(char **tetra)
{
	if (tetra[0][0] != '.' && tetra[0][1] != '.' &&
			tetra[0][2] != '.' && tetra[0][3] != '.')
		return (1);
	if (tetra[0][0] != '.' && tetra[1][0] != '.' &&
			tetra[2][0] != '.' && tetra[3][0] != '.')
		return (1);
	if (*(tetra + 16) != 0)
		return (ft_include_stick(tetra + 16));
	return (0);
}
