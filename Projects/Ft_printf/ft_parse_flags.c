/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 22:54:22 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/10 23:10:32 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_parse_flags(t_print *sp)
{
	int index;

	while ((index = ft_strchri(FLAGS, *sp->format.str)) > -1)
	{
		sp->format.flags |= 128 >> index;
		++sp->format.str;
	}
}
