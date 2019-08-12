/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_ldouble.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 21:51:58 by mwuckert          #+#    #+#             */
/*   Updated: 2019/08/12 15:12:35 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfloat.h"

void	ft_parse_ldouble(t_ieee754 *st, t_parts *r)
{
	*((unsigned*)r->mantis + 1) = *((unsigned*)st->fbits + 1);
	*((unsigned*)r->mantis) = *((unsigned*)st->fbits);
	r->exponent = *((unsigned short*)st->fbits + 4) & ~32768;
	r->sign = *((unsigned short*)st->fbits + 4) >> 15;
}
