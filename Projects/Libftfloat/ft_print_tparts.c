/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tparts.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 17:19:06 by mwuckert          #+#    #+#             */
/*   Updated: 2019/08/25 17:32:26 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfloat.h"
#include "libft.h"

void	ft_print_tparts(t_parts *real)
{
	ft_putstr("sign:      ");
	real->sign ? ft_putstr("Yes") : ft_putstr("No");
	ft_putchar('\n');
	ft_putstr("exponent:  ");
	ft_putnbr(real->exponent);
	ft_putchar('\n');
	ft_putstr("mantis:    ");
	ft_printbits(real->mantis, 8);
}
