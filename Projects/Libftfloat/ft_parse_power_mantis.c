/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_power_mantis.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:13:47 by mwuckert          #+#    #+#             */
/*   Updated: 2019/08/25 22:07:24 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfloat.h"
#include "libft.h"

static void	ft_identify_positive(t_power *p, int **i)
{
	--(*i);
	while ((*i) > p->powers && *(*i) < 0)
		--(*i);
	if (*(*i + 1) < 0)
		p->negative = *i + 1;
	if (*(*i) >= 0)
		p->negative = 0;
			p->positive = *i;
}	 

static void	ft_add_power(int **i, unsigned m, short *e)
{
	int count;

	count = 0;
	while (count++ < 32)
	{
		if (m & 2147483648)
			*(*i)++ = *e;
		--(*e);
		m <<= 1;
	}
}

t_power		*ft_parse_power_mantis(t_parts *r)
{
	t_power		*p;
	int			*i;
	short 		e;

	if (!(p = ft_memalloc(sizeof(t_power))))
		return (0);
	e = r->exponent;
	i = p->powers;
	*i++ = e--;
	ft_add_power(&i, *((unsigned*)r->mantis + 1), &e);
	if (*((unsigned*)r->mantis))
		ft_add_power(&i, *((unsigned*)r->mantis), &e);
	return (p);
}
