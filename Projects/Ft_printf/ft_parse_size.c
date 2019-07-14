/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 05:19:30 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/10 23:10:37 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_parse_size(t_print *sp)
{
	if (*sp->format.str == 'h')
	{
		if (sp->format.size & 128)
			sp->format.size |= 64;
		else
			sp->format.size |= 128;
		++sp->format.str;
	}
	else if (*sp->format.str == 'l')
	{
		if (sp->format.size & 2)
			sp->format.size |= 1;
		else
			sp->format.size |= 2;
		++sp->format.str;
	}
}
