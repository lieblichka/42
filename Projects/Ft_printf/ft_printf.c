/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 20:10:20 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/11 19:48:03 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	t_print specify;

	va_start(specify.args, format);
	specify.format.str = (char*)format;
	specify.displayed = 0;
	ft_handling(&specify);
	ft_write_buf(&specify);
	ft_parse_print(&specify);
	va_end(specify.args);
	return (specify.displayed);
}
