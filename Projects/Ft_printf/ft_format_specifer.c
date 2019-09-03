/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_specifer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 06:10:58 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/21 19:39:51 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_format_specifer(t_print *sp)
{
	if (ft_is_specifer(sp) && *sp->format.str &&
			sp->format.types == sp->format.len.flags)
		return (1);
	return (0);
}
