/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts_figure.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtreutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 12:33:55 by dtreutel          #+#    #+#             */
/*   Updated: 2019/01/21 12:36:50 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

void	ft_puts_figure(char **tetra)
{
	ft_putstr(*tetra);
	ft_putchar('\n');
	if (*(*(tetra + 1) + 0) != '\0')
		ft_puts_figure(tetra + 1);
}
