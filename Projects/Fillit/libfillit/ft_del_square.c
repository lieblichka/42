/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtreutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:46:29 by dtreutel          #+#    #+#             */
/*   Updated: 2019/01/23 12:24:54 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int	ft_del_square(char **tetra)
{
	ft_arraydel((void**)tetra);
	ft_memdel((void**)&tetra);
	return (1);
}
