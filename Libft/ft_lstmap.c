/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 18:31:10 by mwuckert          #+#    #+#             */
/*   Updated: 2018/12/09 21:43:26 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *save;

	while (lst && f)
	{
		new = f(lst);
		save = new;
		while ((*lst).next)
		{
			lst = (*lst).next;
			(*new).next = f(lst);
			new = (*new).next;
		}
		lst = (*lst).next;
	}
	return (save);
}
