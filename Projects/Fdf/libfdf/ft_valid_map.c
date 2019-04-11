/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:18:52 by mwuckert          #+#    #+#             */
/*   Updated: 2019/04/11 18:18:53 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

static int	ft_check_size(char *s)
{
	int		t;
	int		p;
	int		c;

	t = 0;
	c = 0;
	p = 0;
	while (s[t])
	{
		(s[t] == ' ') ? (c++) : 0;
		if (s[t] == '\n' && p != 0 && c != p)
			return (0);
		else if (s[t] == '\n' && p == 0)
		{
			p = c;
			c = 0;
		}
		t++;
	}
	return (1);
}

char		*ft_valid_map(const int fd)
{
	char	buf[BUFF_SIZE + 1];
	char	*s;

	ft_bzero(buf, BUFF_SIZE + 1);
	if (read(fd, buf, BUFF_SIZE) <= 0 || !ft_check_size(buf))
		return (0);
	if (!(s = ft_strdup(buf)))
		return (0);
	return (s);
}
