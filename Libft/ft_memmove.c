/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 22:42:19 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/28 16:23:48 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = -1;
	if (src < dst && (src + len > dst))
		while (++i < len)
			*((unsigned char*)(dst + len - i)) =
				*((unsigned char*)(src + len - i));
	else if (src > dst && (dst + len) > src)
		while (++i < len)
			*((unsigned char*)dst + i) = *((unsigned char*)src + i);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
