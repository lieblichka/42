/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 21:23:25 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/29 11:20:50 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n--)
	{
		*(unsigned char*)dst = *(unsigned char*)src;
		if (*(unsigned char*)dst == (unsigned char)c)
			return (dst + 1);
		src++;
		dst++;
	}
	return (0);
}
