/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 19:54:16 by mwuckert          #+#    #+#             */
/*   Updated: 2018/12/14 12:49:56 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

# include "libft.h"
# include <unistd.h>
# include <fcntl.h>

# define BUF_SIZE 4

typedef struct		f_list
{
	char			*to_str;
	int				fd;
	struct s_list	*next;
}					F_LIST;


#endif
