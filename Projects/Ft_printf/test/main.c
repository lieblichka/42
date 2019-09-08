#include "libftprintf.h"
#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <unistd.h>
#include <float.h>

#define STR "LDBL|%#100.*Lf|  DBL|%.*lf|  FLT|%.*f|"
#define VARIABLE , i, test, i, test1, i, test2
#define VAR ,'x'
#define S , 1
#define NBR 0.00045

int	main(void)
{
	long double	test;
	double		test1;
	float		test2;
	int i = 0;

	test = NBR;
	test1 = NBR;
	test2 = NBR;
	//*(unsigned long*)&test = 9218868437227405312;
	//*(unsigned short*)((unsigned char*)&test + 4) = 0;
	while(i < 50)
	{
	write(1, "PRINTF:     ", 11);
	printf("  ->  returned bytes: %d", printf(STR VARIABLE));
	printf("\n");
	write(1, "FT_PRINTF: ", 11);
	printf("  ->  returned bytes: %d", ft_printf(STR VARIABLE));
	printf("\n____________________________________________________\n");
	++i;
	}
}
