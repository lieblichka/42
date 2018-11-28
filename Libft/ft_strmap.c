/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:58:36 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/28 18:30:10 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(unsigned int, char*))
{
	int		i;
	int		size;
	char	*new;

	size = ft_strlen(s);
	new = (char*)malloc(sizeof(*s) * size + 1);
	i = -1;
	while (*(s + ++i))
		*(new + i) = f(i, (char*)s + i);
	return (new);
}
