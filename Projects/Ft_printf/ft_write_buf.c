/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_buf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 00:15:42 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/01 03:06:52 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_write_buf(t_print *sp)
{
	sp->displayed += write(1, sp->buf.buf, sp->buf.index);
	sp->buf.index = 0;
}
