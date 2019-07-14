/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_coordinate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 11:11:10 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/05 11:17:19 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

void	ft_show_coordinate(t_coord *point)
{
	ft_putstr("Point: x = ");
	ft_putnbr((*point).x);
	ft_putchar('\n');
	ft_putstr("Point: y = ");
	ft_putnbr((*point).y);
	ft_putchar('\n');
}
