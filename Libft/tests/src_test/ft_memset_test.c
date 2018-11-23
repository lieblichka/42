/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:07:15 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/23 17:40:28 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft_lib.h"

void	ft_memset_test(char c)
{
	char str[12] = "1234567890A";
	char str2[12] = "1234567890A";

	ft_putstr("\n---ft_memset: ");
	ft_putstr(ft_memset(str, c, 10));
	ft_putstr("\n---memset: ");
	ft_putstr(memset(str2, c, 10));
	ft_putchar('\n');
}
