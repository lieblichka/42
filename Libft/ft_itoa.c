/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:54:09 by mwuckert          #+#    #+#             */
/*   Updated: 2018/12/02 19:36:17 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		size;
	int		copy;
	char	*a;

	size = 2;
	copy = n;
	while ((n / 10 && size++))
		n /= 10;
	if (!(a = (char*)ft_memalloc(size--)))
		return (0);
	n = copy;
	while (size--)
	{
		*(a + size) = n % 10;
		n /= 10;
	}
	return (a);
}
