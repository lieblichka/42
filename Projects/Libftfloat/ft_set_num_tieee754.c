/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_num_tieee754.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 18:20:47 by mwuckert          #+#    #+#             */
/*   Updated: 2019/08/12 18:58:01 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfloat.h"

void	ft_set_num_tieee754(long double num, t_ieee754 *st)
{
	if (st && *st)
	{
		if (st->type == FLOAT_T)
			*((float*)st->fbits) = (float)num;
		else if (st->type == DOUBLE_T)
			*((double*)st->fbits) = (double)num;
		else (st->type == LDOUBLE_T)
			*((long double*)st->fbits) = num;
	}
}
