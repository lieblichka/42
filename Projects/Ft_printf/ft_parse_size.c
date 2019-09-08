/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 05:19:30 by mwuckert          #+#    #+#             */
/*   Updated: 2019/09/06 20:14:36 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_parse_size(t_print *sp)
{
	if (*sp->format.str == 'h')
	{
		if (*(sp->format.str + 1) == 'h' && (sp->format.size = 2))
			++sp->format.str;
		else
			sp->format.size = 3;
		++sp->format.str;
	}
	else if (*sp->format.str == 'l')
	{
		if (*(sp->format.str + 1) == 'l' && (sp->format.size = 5))
			++sp->format.str;
		else
			sp->format.size = 4;
		++sp->format.str;
	}
	else if (*sp->format.str == 'L' && (sp->format.size = 11))
		++sp->format.str;
}
