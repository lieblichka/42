/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handling.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 21:26:08 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/08 17:06:24 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_handling(t_print *sp)
{
	sp->buf.index = 0;
	sp->format.func = (t_func[]){FUNC};
	while (*sp->format.str)
	{
		if (*sp->format.str == '%')
		{
			ft_parse(sp);
			ft_format(sp);
		}
		ft_add_to_buf(sp);
		++sp->format.str;
	}
}
