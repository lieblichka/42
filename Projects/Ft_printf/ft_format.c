/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 15:15:23 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/11 20:12:33 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_format(t_print *sp)
{
	sp->format.len.zero = 0;
	sp->format.len.space = 0;
	if (sp->format.types > -1)
		((t_func *)sp->format.func)[sp->format.types](sp);
}
