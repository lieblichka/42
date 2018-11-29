/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 22:42:19 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/29 13:02:19 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = -1;
	while (++i < len)
		if (src < dst)
			*(unsigned char*)(dst + len - 1 - i) =
				*(unsigned char*)(src + len - 1 - i);
		else
			*(unsigned char*)(dst + i) =
				*(unsigned char*)(src + i);
	return (dst);
}
