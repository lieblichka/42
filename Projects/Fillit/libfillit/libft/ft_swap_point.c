/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 11:50:16 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/13 12:21:35 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_point(void ***p1, void ***p2)
{
	void **swap_point;

	swap_point = *p1;
	*p1 = *p2;
	*p2 = swap_point;
}