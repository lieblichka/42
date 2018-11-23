/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:07:15 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/23 18:09:28 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft_lib.h"

void	ft_bzero_test(size_t n)
{
	char	*str;
	size_t	i;

	str = "1234567890A";
	i = 0;
	ft_putstr("\n---ft_b_zero: ");
	ft_bzero(str, n);
	while (i < n)
		ft_putnbr(*(str + i++) == NULL);
}
