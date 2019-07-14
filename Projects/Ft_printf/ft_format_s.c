/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 11:07:58 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/12 20:46:13 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_format_s(t_print *sp)
{
	int len;

	sp->format.save = va_arg(sp->args, char*);
	if (sp->format.width)
	{
		if (sp->format.precision != -1)
		{
			len = ft_strnlen(sp->format.save, sp->format.precision);
		}
		if  (!(sp->format.flags & 136) == 8)
			 sp->format.len.zero = sp->format.width - len;
		else
			 sp->format.len.space = sp->format.width - len;
		ft_add_zero(sp);
		if (!(sp->format.flags & 136))
			ft_add_space(sp);
	}
	else if (sp->format.precision != -1)
		len = ft_strnlen(sp->format.save, sp->format.precision);

	if (!(sp->format & 136))
}
