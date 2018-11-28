/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 21:23:25 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/27 22:15:22 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = -1;
	while (++i < n)
		if (*((unsigned char*)(src + i)) != c)
			*((unsigned char*)dst + i) = *((unsigned char*)(src + i));
		else
			return (dst + i + 1);
	return (NULL);
}
