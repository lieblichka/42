/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:17:16 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/29 22:24:54 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void	ft_memdel(void **ap)
{
	//while ((unsigned char*)ap++)
		//while (*((*(unsigned char*)ap - 1) + i))
	
	ap = malloc(1);
	char *a;
	char b = 'a';
	a = &b;
	ap = (void*)a;
	*((*(char*)ap + 0) + 0) = 0;
//	char **sm;
//	char *s;
//	char a = 'a';
//
//	s = &a;
//	sm = &s;
//
//	ft_putnbr(*(*(sm + 0) + 0));
//	ap = 0;	
}
