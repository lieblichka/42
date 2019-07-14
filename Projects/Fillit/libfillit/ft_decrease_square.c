/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrease_square.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtreutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:06:23 by dtreutel          #+#    #+#             */
/*   Updated: 2019/01/22 20:09:30 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

void	ft_decrease_square(char **tetra)
{
	tetra[0][3] = '\0';
	tetra[1][3] = '\0';
	tetra[2][3] = '\0';
	ft_bzero((void*)tetra[3], 4);
	if (*(tetra + 16) != 0)
		ft_decrease_square(tetra + 16);
}
