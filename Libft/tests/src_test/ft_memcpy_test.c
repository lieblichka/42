#include <string.h>
#include "ft_lib.h"

void	ft_memcpy_test(char *cat_str)
{
	char str[15] = {"1234567890ABC"};
	char str2[15] = {"1234567890ABC"};
	
	ft_putstr("\n---ft_memcpy: ");
	ft_putstr(ft_memcpy(str, cat_str, 4));
	ft_putstr("\n+++memcpy:    ");
	ft_putstr(memcpy(str2, cat_str, 4));
	ft_putchar('\n');	
}
