/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 18:31:10 by mwuckert          #+#    #+#             */
/*   Updated: 2018/12/07 20:43:24 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *alst;
	t_list *new;

	alst = (t_list**)new;
	while (lst)
	{
		new = ft_lstnew((*f(lst)).content, (*lst).content_size);
		(*new).next = (*f(lst)).next;
		lst = (*lst).next;
		new = (*new).next;
	}
	return (*alst); 
}
