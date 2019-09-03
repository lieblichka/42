/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_specifer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 20:28:54 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/20 20:46:09 by wmaykit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_is_specifer(t_print *sp)
{
	 if (*sp->format.str == '-' || *sp->format.str == '+' ||
			*sp->format.str == ' ' || *sp->format.str == '#' ||
				*sp->format.str == 'c' || *sp->format.str == 's' || 
					*sp->format.str == 'p' || *sp->format.str == 'd' ||
						*sp->format.str == 'i' || *sp->format.str == 'o' ||
							*sp->format.str == 'u' || *sp->format.str == 'x' ||
								*sp->format.str == 'X' || *sp->format.str == 'l'
									|| *sp->format.str == 'h')
		 return (1);
	 return (0);
}
