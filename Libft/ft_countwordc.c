/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwordc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:56:51 by mwuckert          #+#    #+#             */
/*   Updated: 2018/12/03 19:35:54 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwordc(const char *str, char c)
{
	int i;

	i = 0;
	while (*str)
		if (*str != c && ++i)
			while (*str != c && *str)
				str++;
		else
			str++;
	return (i);
}
