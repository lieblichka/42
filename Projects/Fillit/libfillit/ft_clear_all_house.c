/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_all_house.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtreutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 19:08:54 by dtreutel          #+#    #+#             */
/*   Updated: 2019/01/22 19:12:51 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

void	ft_clear_all_house(char **tetra)
{
	while (*(tetra + 16) != 0)
		tetra += 16;
	while (ft_whose_house(tetra) != 'A')
	{
		ft_clear_house(tetra);
		tetra -= 16;
	}
}
