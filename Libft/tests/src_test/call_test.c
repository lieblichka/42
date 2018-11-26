/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:05:47 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/26 11:27:09 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_test.h"

void	call_test(void)
{
	ft_memset_test('a');
	ft_bzero_test(10);
	ft_memcpy_test("kisa");
	ft_memccpy_test("kisa", '\0');
	ft_memmove_test("kisa");
}
