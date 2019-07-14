/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 13:30:17 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/20 15:52:38 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

void	ft_print_params(char **argv_copy, int size)
{
	int i;

	i = 0;
	while (i++ < size)
	{
		ft_putstr(argv_copy[i]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_print_params(argv, argc - 1);
	return (0);
}
