/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rounding_treal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmaykit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 12:48:53 by wmaykit           #+#    #+#             */
/*   Updated: 2019/09/06 20:06:09 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfloat.h"

static int	ft_numlen(unsigned num, unsigned *d)
{
	unsigned	*start;

	start = d;
	while (num > *start)
		++start;
	return (start - d);
}

void		ft_rounding_treal(t_real *num, int precision)
{
	t_round rn;

	rn.d = (unsigned[]){DIGITS};
	rn.sign_digit = ft_numlen(num->fractional[num->frac_position], rn.d);
	rn.zero_after = num->len_frac - (rn.sign_digit + num->frac_position * 8);
	*rn.d = 1;
	if (precision == 0 && rn.zero_after < 1)
	{
		if (*(num->fractional + num->frac_position) /
				rn.d[rn.sign_digit - 1] >= 5)
			if ((*(num->integer) += 1) >= rn.d[8])
				ft_normalize_num(num->integer, &num->len_int);
	}
	else if (precision > 0
			&& precision >= rn.zero_after && precision < num->len_frac)
	{
		rn.round_cell = (num->len_frac - precision);
		if (rn.round_cell % 8 == 0)
			--rn.round_cell;
		rn.res = *(num->fractional + rn.round_cell / 8);
		if (rn.res / rn.d[rn.round_cell % 8 - 1] % 10 >= 5)
			if ((*(num->fractional + rn.round_cell / 8) =
						rn.res + rn.d[rn.round_cell % 8]) >= rn.d[8])
				ft_normalize_num(num->fractional, &num->frac_position);
	}
}
