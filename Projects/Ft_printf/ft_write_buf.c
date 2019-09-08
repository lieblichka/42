/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_buf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 00:15:42 by mwuckert          #+#    #+#             */
/*   Updated: 2019/09/04 16:03:16 by wmaykit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_write_buf(t_print *sp)
{
	sp->displayed += write(1, sp->buf.buf, sp->buf.start - sp->buf.buf);
	sp->buf.start = sp->buf.buf;
}
