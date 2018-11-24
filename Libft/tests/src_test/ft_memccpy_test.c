/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 21:37:20 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/24 22:39:11 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft_lib.h"

void	ft_memccpy_test(const void *cat_str, int c)
{
	char str[15] = {"1234567890ABC"};
	char str2[15] = {"1234567890ABC"};

	ft_putstr("\n---ft_memccpy: ");
	ft_putstr(ft_memccpy(str, cat_str, c, 5));
	ft_putstr("\n+++memccpy:    ");
	ft_putstr(memccpy(str2, cat_str, c, 5));
	ft_putchar('\n');	
}
