/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:45:21 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/28 16:33:36 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = -1;
	while (++i < n)
		if (!((unsigned char)(*(unsigned char*)s1 + i) -
					(unsigned char)(*(unsigned char*)s2 + i)))
			return ((unsigned char*)s1 - (unsigned char*)s2);
	return (0);
}
