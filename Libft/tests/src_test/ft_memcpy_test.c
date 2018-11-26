/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 21:37:20 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/26 12:41:13 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft_lib.h"

void	ft_memcpy_test(const void *cat_str)
{
	char str[15] = {"1234567890ABC"};
	char str2[15] = {"1234567890ABC"};

	cat_str = 0;
	ft_putstr("\n---ft_memcpy: ");
	ft_putstr(ft_memcpy(str + 4, str + 2, 4));
	ft_putstr("\n+++memcpy:    ");
	ft_putstr(memcpy(str2 + 4, str2 + 2, 4));
	ft_putchar('\n');
}
