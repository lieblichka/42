/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_real_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 18:35:04 by mwuckert          #+#    #+#             */
/*   Updated: 2019/08/26 19:37:50 by wmaykit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfloat.h"
#include <stdio.h>

t_real		*ft_get_real_number(t_ieee754 *st)
{
	t_parts	real;
	t_real	*num;
	t_power	*power;

	if (!(num = ft_create_treal(INT_LEN_MAX, FRAC_LEN_MAX)))
		return (0);
	ft_parse_parts_ieee754(st, &real);
	if (!(power = ft_parse_power_mantis(&real)))
	{
		ft_delete_treal(num);
		return (0);
	}
	if (real.spec_value & 255)
		*((unsigned*)num->spec_value) = real.spec_value;
	else
		ft_conversion_powers(num, power);
	return (num);
}
