/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_real_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 18:35:04 by mwuckert          #+#    #+#             */
/*   Updated: 2019/08/12 17:05:27 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfloat.h"

t_real	*ft_get_real_number(t_ieee754 *st)
{
	t_real	*num;
	t_parts	real;

	if (!(num = ft_create_treal(INT_LEN_MAX, FRAC_LEN_MAX)))
		return (0);
	ft_parse_parts_ieee754(st, &real);
	return (num);
}
