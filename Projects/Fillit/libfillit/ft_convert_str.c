/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: team0420 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 18:27:30 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/17 16:13:56 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int	ft_convert_str(char *str)
{
	int power;
	int n;

	n = 0;
	power = 16;
	while (power--)
	{
		if (*str == '#')
			n += 1 * ft_power(2, power);
		else
			n += 0;
		str++;
	}
	return (n);
}
