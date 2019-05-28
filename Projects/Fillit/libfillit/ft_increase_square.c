/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_increase_square.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtreutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 15:03:24 by dtreutel          #+#    #+#             */
/*   Updated: 2019/01/22 21:33:06 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

void	ft_increase_square(char **tetra)
{
	int i;

	i = -1;
	while (*(*(tetra + ++i) + 0) != '\0')
		*(*(tetra + i) + ft_strlen(*(tetra + i))) = '.';
	ft_memset((void*)*(tetra + i), '.', i + 1);
	if (*(tetra + 16) != 0)
		ft_increase_square(tetra + 16);
}
