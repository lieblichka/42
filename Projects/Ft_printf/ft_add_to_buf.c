/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_to_buf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 22:28:16 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/01 04:49:32 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_add_to_buf(t_print *sp)
{
	if (sp->buf.index < BUFF_SIZE)
		*(sp->buf.buf + sp->buf.index++) = *sp->format.str;
	else
		ft_write_buf(sp);
}
