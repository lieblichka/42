/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 21:37:20 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/24 21:56:50 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft_lib.h"

void	ft_memcpy_test(const void *cat_str)
{
	char str[15] = {"1234567890ABC"};
	char str2[15] = {"1234567890ABC"};

	ft_putstr("\n---ft_memcpy: ");
	ft_putstr(ft_memcpy(str, cat_str, 4));
	ft_putstr("\n+++memcpy:    ");
	ft_putstr(memcpy(str2, cat_str, 4));
	ft_putchar('\n');	
}
