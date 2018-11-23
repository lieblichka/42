/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:07:15 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/23 14:56:37 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft_lib.h"

void	ft_memset_test(char c)
{
	char str[] = "1234567890A";

	ft_putstr("\n---ft_memset:");
	ft_putnbr(ft_memset(str, c, 10) == ft_memset(str, c, 10));
	ft_putstr("\n\n");
}
