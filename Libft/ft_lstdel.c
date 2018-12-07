/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 11:05:25 by mwuckert          #+#    #+#             */
/*   Updated: 2018/12/07 20:22:36 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	if (alst && *alst && del)
	{
		if ((**alst).next)
			ft_lstdel((t_list**)(**alst).next, del);
		ft_lstdelone(alst, del);
	}
}
