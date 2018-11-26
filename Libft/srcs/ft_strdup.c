/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:12:15 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/26 19:25:45 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_lib.h"

char	*ft_strdup(const char *s1)
{
	char *dup;

	dup = (char*)(malloc(sizeof(*s1) * ft_strlen(s1) + 1));
	while (*s1)
		*dup++ = *s1++;
	*dup = '\0';
	return (dup);
}
