#include <stdio.h>
#include "libftfloat.h"
#include "libft.h"
#include <float.h>

static void print_sec_num(unsigned num, int i)
{
	if (i)
		print_sec_num(num / 10, i - 1);
	if (num)
		ft_putnbr(num % 10);
	else
		ft_putnbr(0);
	}

int	main(void)
{
	t_ieee754	*st;
	t_parts		real;
	t_power		*power;
	t_real		*num;
	int			i;

	st = ft_create_tieee754(LDOUBLE_T);
	PUT_LD(st->fbits) = 0.0;
	*((unsigned long*)st->fbits) = 9223372036854775807;
	ft_printbits(st->fbits, 10);
	num = ft_create_treal(INT_LEN_MAX, FRAC_LEN_MAX);
	ft_parse_parts_ieee754(st, &real);
	ft_print_tparts(&real);
	power = ft_parse_power_mantis(&real);
	ft_print_tpowers(power);
	ft_get_integer_part(num, power);
	ft_get_frac_part(num, power);
	i = num->len_int;
	i = num->frac_position;
	printf("len_int->%d\nlen_frac->%d\n", num->len_int, num->len_frac);
	ft_putchar('\n');
	while (i > -1)
	{
		//ft_putchar('\n');
		//ft_putnbr(num->integer[i--]);
		//ft_putchar('\n');
		//print_sec_num(num->integer[i--], 7);
		print_sec_num(num->fractional[i--], 7);
		//ft_putnbr(*current--);
	}
	printf("\n\n%.16500Lf", PUT_LD(st->fbits));
	return (0);
}
