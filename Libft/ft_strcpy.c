/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:24:11 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/28 20:26:35 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	char *addr;

	addr = dst;
	while (*src)
		*addr++ = *src++;
	*addr = '\0';
	return (dst);
}