/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:27:21 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/26 20:42:59 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *addr;

	if (*needle == '\0')
		return (haystack);
	while (*haystack && *needle)
		if (*haystack++ == *needle++)
			addr = haystack - 1;
		else
			addr = 0;
	return (addr);
}
