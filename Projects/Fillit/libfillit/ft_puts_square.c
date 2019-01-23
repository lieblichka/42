/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtreutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:27:16 by dtreutel          #+#    #+#             */
/*   Updated: 2019/01/22 20:36:07 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

void	ft_puts_square(char **tetra)
{
	if (*(tetra + 16) != 0)
		ft_puts_square(tetra + 16);
	else
		ft_puts_figure(tetra);
}
