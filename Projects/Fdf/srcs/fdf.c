/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:19:25 by mwuckert          #+#    #+#             */
/*   Updated: 2019/04/11 18:19:27 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

int fdf(const int fd)
{
    char *map;

    if (!(map = ft_valid_map(fd)))
        return (0);
        
    return (1);
}