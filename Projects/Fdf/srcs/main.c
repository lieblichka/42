/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:19:31 by mwuckert          #+#    #+#             */
/*   Updated: 2019/04/11 18:19:34 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft.h"

int main(int argc, char *argv[])
{
    int fd;

    if (argc == 2)
    {
        fd = open(*(argv + 1), O_RDONLY);
        if (!(fdf(fd)))
            ft_putstr("error\n");
    }
    else
        ft_putstr("usage: fdf source_file\n");
    return (0);
} 
