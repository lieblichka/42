/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 23:58:14 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/12 19:15:41 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_parse_width(t_print *sp)
{
	if (ft_isdigit(*sp->format.str))
	{
		sp->format.width = ft_atoi(sp->format.str);
		while (ft_isdigit(*sp->format.str))
			++sp->format.str;
	}
	else if (*sp->format.str == '*')
	{
		sp->format.width = va_arg(sp->args, int);
		++sp->format.str;
	}
}
