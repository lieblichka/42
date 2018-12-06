/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 16:26:34 by mwuckert          #+#    #+#             */
/*   Updated: 2018/12/06 14:06:52 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "libft.h"

void 	i_know_who_myson(People one, People two, People three)
{
	one.name = "Sergei";
	one.junior = 0;
	
	two.name = "Semen";
	two.junior = 0;
	one.junior = &two;

	three.name = "Vladimir";
	three.junior = &one;

	ft_putstr("Name my son is: ");
	ft_putstr((*one.junior).name);
	ft_putstr("\nName my father is: ");
	ft_putstr("I don't know");
	ft_putstr("\nBut my father is able one interesting thing.\n");
	ft_putstr("Father say that his grandson is: ");
	//ft_putstr((*((*three.junior).junior)).name);
	ft_putstr(three.junior->junior->name);
}
