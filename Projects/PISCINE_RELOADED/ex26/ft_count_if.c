/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 18:49:58 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/21 19:01:29 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int k;

	k = 0;
	while (*tab != '\0')
		if (f(*tab++) == 1)
			k++;
	return (k);
}
