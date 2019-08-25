/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_float.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 21:51:11 by mwuckert          #+#    #+#             */
/*   Updated: 2019/08/13 20:08:09 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfloat.h"

void	ft_parse_float(t_ieee754 *st, t_parts *r)
{
	*((unsigned*)r->mantis + 1) = *((unsigned*)st->fbits) << 9;
	r->exponent = (unsigned char)(*((unsigned*)st->fbits) >> 23) - 127;
	r->sign = *((unsigned*)st->fbits) >> 31;
}
