/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 13:45:17 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/27 13:45:33 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc == 2)
		printf("atoi: %d\nft_atoi: %d\n", atoi(argv[1]), ft_atoi(argv[1]));
	return (0);
}
