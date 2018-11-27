/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:27:21 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/27 20:38:49 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *addr;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack && *needle && len--)
		if (*haystack++ == *needle++)
			addr = (char*)haystack - 1;
		else
			addr = 0;
	return (addr);
}
