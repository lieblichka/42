/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 21:41:18 by mwuckert          #+#    #+#             */
/*   Updated: 2018/12/03 22:22:16 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <libft.h>

int		ft_openfileread(char *s)
{
	
	if(fd = open("hello_world", O_RDONLY) = )
		return (0);
	return (fd);
}

int		ft_creatfile(char *s)
{
	if(fd = open("42", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR))
		return (0);
	return (fd);
}

int		main(void)
{
	int fd;

	fd = ft_openfileread("42");
	ft_putnbr(fd);
	
	return (0);
}
