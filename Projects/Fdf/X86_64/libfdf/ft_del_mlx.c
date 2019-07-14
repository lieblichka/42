/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_mlx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 20:25:41 by mwuckert          #+#    #+#             */
/*   Updated: 2019/04/23 20:25:44 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

void	ft_del_mlx(t_mlx **amlx)
{
	if (amlx && *amlx)
	{
		if ((**amlx).next)
			ft_del_mlx((t_mlx**)&(**amlx).next);
		ft_memdel((void**)&(**amlx).point);
		ft_memdel((void**)amlx);
	}
}
