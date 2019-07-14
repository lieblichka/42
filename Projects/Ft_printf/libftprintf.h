/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 20:08:32 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/12 13:18:04 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft.h"
# include <unistd.h>
# include <stdarg.h>

# define BUFF_SIZE 1000
# define FLAGS "-+ #0"
# define TYPES "cspdiouxX"
# define SCALAR(f) f##c, f##s, f##p//,f##d, f##i, f##o, f##u, f##x, f##X
# define FUNC SCALAR(ft_format_)
# define CAST_US(arg) ((unsigned short*) arg)
# define CAST_C(arg) ((unsigned char*) arg)

typedef	char		t_ulint[8];

typedef struct		s_buf
{
	int				index;
	char			buf[BUFF_SIZE];	
}					t_buf;

typedef struct		s_len
{
	int				space;
	int				zero;
}					t_len;


typedef struct		s_format
{
	void			*func;
	int				width;
	int				types;
	int				precision;
	char			*str;
	char			*save;
	unsigned char	size;
	unsigned char	flags;
	t_len			len;
}					t_format;

typedef struct		s_print
{
	int				displayed;
	va_list			args;
	t_format		format;
	t_ulint			arg;
	t_buf			buf;
}					t_print;

typedef void		(*t_func)(t_print*);

int					ft_printf(const char *format, ...);
int					ft_format_specifer(t_print *sp);
void				ft_format_c(t_print *sp);
void				ft_format_s(t_print *sp);
void				ft_format_p(t_print *sp);
void				ft_parse(t_print *sp);
void				ft_format(t_print *sp);
void				ft_handling(t_print *sp);
void				ft_write_buf(t_print *sp);
void				ft_add_zero(t_print *sp);
void				ft_add_space(t_print *sp);
void				ft_add_to_buf(t_print *sp);
void				ft_parse_size(t_print *sp);
void				ft_parse_print(t_print *sp);
void				ft_parse_flags(t_print *sp);
void				ft_parse_width(t_print *sp);
void				ft_parse_types(t_print *sp);
void				ft_parse_precision(t_print *sp);

#endif
