/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:04:04 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/28 16:29:25 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t length;

	length = 0;
	while (*dst)
	{
		dst++;
		length++;
	}
	while (*dst && size--)
	{
		*dst++ = *src++;
		length++;
	}
	*dst = '\0';
	return (length);
}
