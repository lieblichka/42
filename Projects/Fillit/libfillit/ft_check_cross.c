/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_cross.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtreutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 05:11:57 by dtreutel          #+#    #+#             */
/*   Updated: 2019/01/20 20:50:49 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

static int	ft_cross_found(char *f1, char *f2)
{
	if ((*f1 && *f2) &&
			((*f1 + '.' != *f1 + *f2) && (*f2 + '.' != *f2 + *f1)))
		return (1);
	if (*f1 && *f2)
		return (ft_cross_found(++f1, ++f2));
	return (0);
}

int			ft_check_cross(char **figure_1, char **figure_2)
{
	if (ft_cross_found(*(figure_1), *(figure_2)))
		return (1);
	if (*(*(figure_1 + 1)) && *(*(figure_2 + 1)))
		return (ft_check_cross(figure_1 + 1, figure_2 + 1));
	return (0);
}
