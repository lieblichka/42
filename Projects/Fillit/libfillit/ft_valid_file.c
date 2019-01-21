/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: team0420 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 16:07:09 by team0420          #+#    #+#             */
/*   Updated: 2019/01/17 18:05:13 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfillit.h"

static int	ft_check_figure(char **tetra)
{
	if (ft_countchar(*(tetra + 0), '#') +
		ft_countchar(*(tetra + 1), '#') +
			ft_countchar(*(tetra + 2), '#') +
				ft_countchar(*(tetra + 3), '#') != 4)
		return (0);
	if (*(tetra + 4) != 0)
		return (ft_check_figure(&tetra[4]));
	return (1);
}

static int	ft_check_tetra(char **tetra)
{
	while (*tetra)
		if (ft_strlen(*tetra++) != 4)
			return (0);
	return (1);
}

static int	ft_check_symbols(char *str)
{
	char	*addr;
	int		word;

	addr = str;
	while (*str)
	{
		if (*str != '.' && *str != '\n' && *str != '#')
			return (0);
		str++;
	}
	if ((word = ft_countwordc(addr, '\n')) % 4 != 0
			|| ft_countchar(addr, '\n') != word + (word / 4) - 1
				|| (ft_strlen(addr) - ft_countchar(addr, '\n')) % 16 != 0
					|| ft_countchar(addr, '#') % 4 != 0)
		return (0);
	return (1);
}

static int	ft_check_size(int size)
{
	if (size < 20 || size > 545)
		return (0);
	return (1);
}

char		**ft_valid_file(const int fd, char **tetra)
{
	char buf[BUFF_SIZE];

	ft_bzero(buf, BUFF_SIZE);
	if (!ft_check_size(read(fd, buf, BUFF_SIZE)))
		return (0);
	if (!ft_check_symbols(&buf[0]))
		return (0);
	if (!(tetra = ft_strsplit(&buf[0], '\n')))
		return (0);
	if (!(ft_check_tetra(tetra)) || !(ft_check_figure(tetra)))
	{
		ft_arraydel((void**)tetra);
		return (0);
	}
	return (tetra);
}
