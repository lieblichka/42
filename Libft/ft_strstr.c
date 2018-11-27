/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:27:21 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/27 20:39:37 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *addr;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack && *needle)
		if (*haystack++ == *needle++)
			addr = (char*)haystack - 1;
		else
			addr = 0;
	return (addr);
}
