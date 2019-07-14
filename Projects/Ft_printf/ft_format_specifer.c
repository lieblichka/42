/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_specifer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 06:10:58 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/01 08:42:21 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_format_specifer(t_print *sp)
{
	if ((ft_strchri(FLAGS, *sp->format.str) > -1
			|| ft_isdigit(*sp->format.str)
				|| *sp->format.str || sp->format.str)
					&& sp->format.types == -1)
		return (1);
	return (0);
}
