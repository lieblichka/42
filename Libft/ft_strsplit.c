/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:44:00 by mwuckert          #+#    #+#             */
/*   Updated: 2018/12/04 03:30:49 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**ar;

	if (!s)
		return (0);
	if (*s == '\0')
		if ((ar = ft_memalloc(1)))
			return (ar);
	i = 0;
	if (!(ar = (char**)ft_memalloc(sizeof(char*) * ft_countwordc(s, c) + 1)))
		return (0);
	while (*s)
		if (*s != c)
		{
			*(ar + i++) = ft_strsub(s, 0, ft_strlenc(s, c));
			s += ft_strlenc(s, c);
		}
		else
			s++;
	*(ar + i) = 0;
	return (ar);
}
