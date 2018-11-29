/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:27:21 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/29 13:25:57 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = ft_strlen(needle);
	while (*haystack && len-- && i <= len)
		if (!(ft_strncmp(haystack++, needle, i)))
			return ((char*)haystack - 1);
	return (0);
}
