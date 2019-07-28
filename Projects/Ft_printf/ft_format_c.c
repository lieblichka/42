/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 09:46:10 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/23 13:14:35 by wmaykit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_format_c(t_print *sp)
{
	sp->format.save = sp->format.str;
	if ((sp->format.flags & 136) == 8)
		sp->format.len.zero = sp->format.width - 1;
	else
		sp->format.len.space = sp->format.width - 1;
	ft_add_zero_to_buf(sp);
	if (!(sp->format.flags & 136))
		ft_add_space_to_buf(sp);
	if (sp->format.size == 2)
	{
		*CAST_US(sp->arg) = va_arg(sp->args, int);
		sp->format.str = sp->arg;
		ft_add_to_buf(sp);
		sp->format.str++;
		ft_add_to_buf(sp);
	}
	else
	{
		*CAST_C(sp->arg) = (char)va_arg(sp->args, int);
		sp->format.str = sp->arg;
		ft_add_to_buf(sp);
	}
	ft_add_space_to_buf(sp);
	sp->format.str = sp->format.save;
}
