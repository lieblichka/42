/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 21:17:15 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/21 21:00:48 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *array;

	i = 0;
	if (min >= max)
		return (0);
	array = (int*)(malloc(sizeof(min) * (max - min)));
	while (min < max)
		*(array + i++) = min++;
	return (array);
}
