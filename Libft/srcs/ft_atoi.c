/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:53:40 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/26 22:17:43 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int	nb;
	int sign;
	int i;

	i = 0;
	nb = 1;
	sign = 1;
	while ((*str >= '\a' && *str <= '\r') || *str == '0')
		str++;
	while (*str == '-' || *str == '+')
		if (*str == '+' || *str == '-')
			return (0);
		else
		{
			sign = -1;
			str++;
		}
	while (*str >= '0' && *str <= '9')
	{
		 nb = nb * 10 + *str++ - '0';
		 i++;
	}
	if (i < 20)	
		return (nb * sign);
	else
		return (-1);
}
