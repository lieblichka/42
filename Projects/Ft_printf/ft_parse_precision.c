/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 04:32:49 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/11 20:45:01 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_parse_precision(t_print *sp)
{
	if (*sp->format.str == '.')
	{
		if (*++sp->format.str == '*')
		{
			sp->format.precision = va_arg(sp->args, int);
			++sp->format.str;
		}
		else if (ft_isdigit(*sp->format.str))
		{
			sp->format.precision = ft_atoi(sp->format.str);
			while (ft_isdigit(*sp->format.str))
				++sp->format.str;
		}
	}
}
