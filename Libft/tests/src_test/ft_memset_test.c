/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:07:15 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/22 22:19:28 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);

void	ft_memset_test(char c)
{
	char str[] = "1234567890A";

	printf("ft_memset: %d\n", ft_memset(str, c, 10) == ft_memset(str, c, 10));
}
