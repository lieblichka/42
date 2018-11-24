/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:07:15 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/24 20:37:37 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft_lib.h"

void	ft_bzero_test(size_t n)
{
	char	str[15] = {"1234567890ABC"};
	char	str2[15] = {"1234567890ABC"};
	size_t	i;

	i = -1;
	ft_putstr("\n---ft_bzero: ");
	ft_bzero(str, n);
	while (++i < 15)
		if (*(unsigned char*)(str + i) == 0)
			ft_putstr("^@");
		else
			ft_putchar(*(unsigned char*)(str + i));
	ft_putstr("\n+++bzero:    ");
	i = -1;
	bzero(str2, n);
	while (++i < 15)
		if (*(unsigned char*)(str2 + i) == 0)
			ft_putstr("^@");
		else 
			ft_putchar(*(unsigned char*)(str2 + i));
	ft_putstr("\n");
}
