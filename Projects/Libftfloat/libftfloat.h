/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftfloat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 15:52:53 by mwuckert          #+#    #+#             */
/*   Updated: 2019/08/25 22:07:27 by mwuckert         ###   ########.fr       */
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
# define PUT_F(arg) *((float*)arg)
# define PUT_D(arg) *((double*)arg)
# define PUT_LD(arg) *((long double*)arg)
# define PARSE_PREFIX(p) p##float, p##double, p##ldouble
# define PARSE_FUNC PARSE_PREFIX(ft_parse_)
# define GET_EXP_F(arg) arg - 127
# define GET_EXP_D(arg) arg - 1023
# define GET_EXP_LD(arg) arg - 16383
/*
** INPUT INFO AS STANDART IEEE754
*/

typedef struct		s_ieee754
{
	char			fbits[10];
	int				type;
}					t_ieee754;

/*
** BINARY REPRESENTATION STANDART IEEE754
*/

typedef struct		s_parts
{
	short			exponent;
	unsigned char	sign;
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
**  STRUCTURE WITH ARRAY OF POWERS
*/

typedef struct		s_power
{
	int				powers[64];
	int				*positive;
	int				*negative;
	
}					t_power;

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
t_power				*ft_parse_power_mantis(t_parts *r);

/*
** PRINT
*/

void				ft_print_tparts(t_parts *r);
void				ft_print_tpowers(t_power *p);

/*
** DELETE
*/

void				ft_delete_treal(t_real *real);
void				ft_delete_tieee754(t_ieee754 *standart);

#endif
