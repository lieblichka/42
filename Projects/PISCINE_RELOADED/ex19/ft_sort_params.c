/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:53:26 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/20 20:14:37 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
		if (*s1++ - *s2++ != 0)
			return (*(s1 - 1) - *(s2 - 1));
	return (*s1 - *s2);
}

void	ft_output_params(char **argv_copy, int size)
{
	int i;

	i = 0;
	while (i++ < size)
	{
		ft_putstr(argv_copy[i]);
		ft_putchar('\n');
	}
}

void	ft_sort_params(char **argv_copy, int size)
{
	char	*swap;
	int		i;
	int		j;

	i = 0;
	while (i++ < size)
	{
		j = 0;
		while (j++ < size)
			if (ft_strcmp(argv_copy[i], argv_copy[j]) < 0)
			{
				swap = argv_copy[i];
				argv_copy[i] = argv_copy[j];
				argv_copy[j] = swap;
			}
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_params(argv, argc - 1);
		ft_output_params(argv, argc - 1);
	}
	return (0);
}
