/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_o.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:18:00 by mwuckert          #+#    #+#             */
/*   Updated: 2019/09/06 20:08:43 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_format_o(t_print *sp)
{
	sp->format.len.base = 8;
	CAST_TFUNC(sp->format.func)[sp->format.len.flags + sp->format.size + 5](sp);
	if (*CAST_UL(sp->arg) || sp->format.precision)
		sp->format.len.num = ft_base_len(*CAST_UL(sp->arg), 8);
	ft_calculate_precision(sp);
	if (((IS_SHARP(sp->format.flags) && *CAST_UL(sp->arg)) ||
			(IS_SHARP(sp->format.flags) && !sp->format.precision))
			&& !sp->format.len.zero)
		++sp->format.len.num;
	ft_calculate_width(sp);
	if (((IS_SHARP(sp->format.flags) && *CAST_UL(sp->arg)) ||
			(IS_SHARP(sp->format.flags) && !sp->format.precision)) &&
			!sp->format.len.zero)
		++sp->format.len.zero;
	sp->format.save = sp->format.str;
	if (!IS_MINUS(sp->format.flags))
		ft_add_space_to_buf(sp);
	ft_add_zero_to_buf(sp);
	if (*CAST_UL(sp->arg) || sp->format.precision)
		ft_add_num_to_buf(sp);
	ft_add_space_to_buf(sp);
	sp->format.str = sp->format.save;
}
