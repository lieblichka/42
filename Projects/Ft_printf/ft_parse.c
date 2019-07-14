/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 21:42:16 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/11 20:11:03 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_parse(t_print *sp)
{
	++sp->format.str;
	sp->format.flags = 0;
	sp->format.width = 0;
	sp->format.precision = -1;
	sp->format.size = 0;
	sp->format.types = -1;
	while (ft_format_specifer(sp))
	{
		ft_parse_flags(sp);
		ft_parse_width(sp);
		ft_parse_precision(sp);
		ft_parse_size(sp);
		ft_parse_types(sp);
	}
}
