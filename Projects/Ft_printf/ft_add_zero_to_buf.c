/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_zero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:17:17 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/23 13:32:26 by wmaykit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_add_zero_to_buf(t_print *sp)
{
	sp->format.str = "0";
	while (sp->format.len.zero-- > 0)
		ft_add_to_buf(sp);
}
