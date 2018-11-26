/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 21:37:20 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/26 12:49:03 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft_lib.h"

void	ft_memmove_test(const void *cat_str)
{
	//char str[15] = {"1234567890ABC"};
	char str2[15] = {"1234567890ABC"};
	cat_str = NULL;
	//ft_putstr("\n---ft_memccpy: ");
	//ft_putstr(ft_memccpy(str, cat_str, 5));
	ft_putstr("\n+++memmove:    ");
	ft_putstr(memmove(str2 + 4, str2 + 2, 4));
	ft_putchar('\n');	
}
