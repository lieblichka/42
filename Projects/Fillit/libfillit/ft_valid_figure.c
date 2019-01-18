/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_figure.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: team0420 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 16:12:52 by team0420          #+#    #+#             */
/*   Updated: 2019/01/17 16:14:21 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int			ft_valid_figure(char **tetra)
{
	char	figure[17];
	int		n;

	ft_bzero(figure, 17);
	ft_strcpy(figure, *(tetra + 0));
	ft_strcpy(figure + 4, *(tetra + 1));
	ft_strcpy(figure + 8, *(tetra + 2));
	ft_strcpy(figure + 12, *(tetra + 3));
	n = ft_convert_str(figure);
	if (!(n == F01 || n == F02 || n == F03 || n == F04 ||
			n == F05 || n == F06 || n == F07 || n == F08 ||
				n == F09 || n == F10 || n == F11 || n == F12 ||
					n == F13 || n == F14 || n == F15 || n == F16 ||
						n == F17 || n == F18 || n == F19))
		return (0);
	if (*(tetra + 4) != 0)
		return (ft_valid_figure(tetra + 4));
	return (1);
}
