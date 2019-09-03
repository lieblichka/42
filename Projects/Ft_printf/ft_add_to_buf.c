/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_to_buf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 22:28:16 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/23 20:17:37 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_add_to_buf(t_print *sp)
{
	if (sp->buf.start <= sp->buf.end)
		*sp->buf.start++ = *sp->format.str;
	else
		ft_write_buf(sp);
}
