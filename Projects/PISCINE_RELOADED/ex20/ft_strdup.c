/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 20:24:32 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/20 20:29:04 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++ != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *str;
	char *addr;

	str = (char*)(malloc(sizeof(*src) * ft_strlen(src) + 1));
	addr = str;
	while (*src != '\0')
		*str++ = *src++;
	*str = '\0';
	return (addr);
}
