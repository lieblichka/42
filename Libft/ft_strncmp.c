/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:48:47 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/28 12:07:42 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && n--)
		if (!(*s1++ - *s2++ == 0))
			return ((unsigned char)*(s1 - 1) - (unsigned char)*(s2 - 1));
	if (n + 1 > 0)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	else
		return (0);
}