/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftfloat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 15:52:53 by mwuckert          #+#    #+#             */
/*   Updated: 2019/08/12 19:08:31 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTFLOAT_H
# define LIBFTFLOAT_H

# include <stdlib.h>

# define FLOAT_T 0
# define DOUBLE_T 1
# define LDOUBLE_T 2
# define INT_LEN_MAX 4934
# define FRAC_LEN_MAX 16446
# define PARSE_PREFIX(p) p##float, p##double, p##ldouble
# define PARSE_FUNC PARSE_PREFIX(ft_parse_)

/*
** INPUT INFO AS STANDART IEEE754
*/

typedef struct		s_ieee754
{
	char			fbits[10]; // Занулится ли fbits ? при ft_memalloc
	int				type;
}					t_ieee754;

/*
** BINARY REPRESENTATION STANDART IEEE754
*/

typedef struct		s_parts
{
	unsigned char	sign;
	unsigned short	exponent;
	unsigned char	mantis[8];
}					t_parts;

/*
** ALLOCATED RETURN RESULT REAL NUMBER
*/

typedef struct		s_real
{
	unsigned char	*integer;
	unsigned char	*fractional;
	int				len_int;
	int				len_frac;
}					t_real;

/*
** POINT TO FUNCTION
*/

typedef void		(*t_func)(t_ieee754*, t_parts*);

/*
** CREATE
*/

t_real				*ft_create_treal(short integer, short fractional);
t_ieee754			*ft_create_tieee754(int type);

/*
** SET
*/

void				ft_set_num_tieee754(long double num, t_ieee754 *st);

/*
** GET
*/

t_real				*ft_get_real_number(t_ieee754 *standart);

/*
** PARSE
*/

void				ft_parse_float(t_ieee754 *standart, t_parts *real);
void				ft_parse_double(t_ieee754 *standart, t_parts *real);
void				ft_parse_ldouble(t_ieee754 *standart, t_parts *real);
void				ft_parse_parts_ieee754(t_ieee754 *standart, t_parts *r);

/*
** DELETE
*/

void				ft_delete_treal(t_real *real);
void				ft_delete_tieee754(t_ieee754 *standart);

#endif
