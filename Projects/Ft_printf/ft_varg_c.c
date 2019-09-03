/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_varg_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 15:54:55 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/23 15:00:30 by wmaykit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_varg_c(t_print *sp)
{
	if ((*CAST_C(sp->arg) = (signed char)va_arg(sp->args, int)) < 0)
	{
		 *CAST_C(sp->arg) = -*CAST_C(sp->arg);
		 sp->format.flags |= 1;
	}
}
