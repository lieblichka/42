#include <stdio.h>
#include "libftfloat.h"
#include "libft.h"
#include <float.h>

int	main(void)
{
	t_ieee754	*st;
	t_parts		real;
	t_power		*power;
	t_real		*num;

	st = ft_create_tieee754(FLOAT_T); 
	PUT_F(st->fbits) = 0;
	*((unsigned*)st->fbits) = 2139099136;
	ft_printbits(st->fbits, 10);
	num = ft_create_treal(INT_LEN_MAX, FRAC_LEN_MAX);
	ft_parse_parts_ieee754(st, &real);
	ft_print_tparts(&real);
	power = ft_parse_power_mantis(&real);
	ft_print_tpowers(power);
	printf("%.1000f", PUT_F(st->fbits), );
	return (0);
}
