/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 09:46:10 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/12 20:56:20 by mwuckert         ###   ########.fr       */
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
	ft_add_zero(sp);
	if (!(sp->format.flags & 136))
		ft_add_space(sp);
	if (sp->format.size & 2)
	{
		*CAST_US(sp->arg) = va_arg(sp->args, int);
		sp->format.str = sp->arg;
		ft_add_to_buf(sp);
		sp->format.str++;
		ft_add_to_buf(sp);
	}
	else
	{
		*CAST_C(sp->arg) = va_arg(sp->args, int);
		sp->format.str = sp->arg;
		ft_add_to_buf(sp);
	}
	ft_add_space(sp);
	sp->format.str = sp->format.save;
}
