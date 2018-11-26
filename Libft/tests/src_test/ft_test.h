/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:33:03 by mwuckert          #+#    #+#             */
/*   Updated: 2018/11/26 16:20:15 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TEST_H
# define FT_TEST_H

# include <string.h>

void	ft_memset_test(char c);
void	ft_bzero_test(size_t n);
void	ft_memcpy_test(const void *str);
void	ft_memccpy_test(const void *str, int c);
void	ft_memmove_test(void);

#endif
