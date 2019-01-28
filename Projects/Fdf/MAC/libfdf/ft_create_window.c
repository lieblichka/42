/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 19:11:01 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/28 21:43:52 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"

int	*ft_create_window(void *mlx, int width, int height, char *title)
{
	return (mlx_new_window(mlx, width, height, title));
}
