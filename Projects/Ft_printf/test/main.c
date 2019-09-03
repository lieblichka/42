#include "libftprintf.h"
#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <unistd.h>

#define STR "%#.2o"
#define VARIABLE ,*((unsigned short*)"ч")
#define VAR ,'x'
#define S , 1

int	main(void)
{
	write(1, "PRINTF:     ", 11);
	printf("  ->  returned bytes: %d", printf(STR S));
	printf("\n");
	write(1, "FT_PRINTF: ", 11);
	printf("  ->  returned bytes: %d", ft_printf(STR S));
}
