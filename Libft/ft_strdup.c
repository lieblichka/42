/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:12:15 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/28 14:14:06 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dup;
	char *addr;

	dup = (char*)(malloc(sizeof(*s1) * ft_strlen(s1) + 1));
	addr = dup;
	while (*s1)
		*dup++ = *s1++;
	*dup = '\0';
	return (addr);
}