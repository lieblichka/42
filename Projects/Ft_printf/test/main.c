#include "libftprintf.h"
#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <unistd.h>
#include <float.h>
#include <wchar.h>


#define REPIT_NUM				1
#define NBR						0.00045

/*			TEST FLOAT		*/
#define FLOAT_TEST_FORMAT		"LDBL|%#100.*Lf|  DBL|%.*lf|  FLT|%.*f|"
#define FLOAT_TEST_VARIABLE		i, test, i, test1, i, test2

#define F_TEST_FORMAT			"|%Lf|"
#define F_TEST_VARIABLE			-875.000001l


#define LD_TEST_FORMAT			"|%Lf|"
#define LD_TEST_VARIABLE		0.375000l

/*			TEST DECIMAL		*/
#define D_TEST_FORMAT "%%lld |%*3d|"
#define D_TEST_VARIABLE 5, 0

/*			TEST HEXIMAL		*/
#define X_TEST_FORMAT "%%x |%zd|"
#define X_TEST_VARIABLE 4294967295

/*			TEST UNSIGNED		*/
#define U_TEST_FORMAT " %u     "
#define U_TEST_VARIABLE (235)

/*			TEST MIX    		*/
#define MIX1_TEST_FORMAT "  %x    %p    %f    %u    %hi    %o  "
#define MIX1_TEST_VARIABLE  mx_u, &mx_i, mx_f, mx_u, mx_hi, mx_u

/*			TEST MIX    		*/
#define MIX2_TEST_FORMAT "  %lli    %c    %li    %o    %Lf    %x  "
#define MIX2_TEST_VARIABLE  mx_u, &mx_i, mx_f, mx_u, mx_hi, mx_u

/*			TEST MIX    		*/
#define MIX3_TEST_FORMAT "  %x    %p    %i    %Lf    %u    %s  "
#define MIX3_TEST_VARIABLE  

/* 			TEST CHAR 			*/
#define C_TEST_FORMAT "%%lc|%hhc|"
#define C_TEST_VARIABLE *(unsigned short*)"ф"

/*			TEST OCTAL			*/

#define O_TEST_FORMAT "%%#5o|%#-50o|"
#define O_TEST_VARIABLE 0

/*			TEST BITS			*/
#define B_TEST_FORMAT "%.*b"
#define B_TEST_VARIABLE sizeof(double), &mx_f

#define CURRENT_TEST B_TEST_FORMAT, B_TEST_VARIABLE



int	main(void)
{
	long double		test0;
	double			test1;
	float			test2;
	int				i = 0;
	int				num;

	num = 15;
	unsigned int	mx_u = 235;
	long double		mx_Lf = 0.375l;
	double			mx_f = 0.625;
	long			mx_li =  4223372036854775800;
	long long		mx_lli = 3223372036654775200;
	char			mx_c = 'G';
	short			mx_hi = -3244;
	char			mx_hhi = 'F';
	char			*mx_s = "Hello, World!";
	int				mx_i = 42;

	test0 = NBR;
	test1 = NBR;
	test2 = NBR;

	while ( i < REPIT_NUM)
	{
		printf("__________________________________________________________\n");
		write(1, "PRINTF:     ", 11);
		printf("  ->  returned bytes: %d", printf(CURRENT_TEST));
		printf("\n");
		write(1, "FT_PRINTF: ", 11);
		printf("  ->  returned bytes: %d", ft_printf(CURRENT_TEST));
		printf("\n__________________________________________________________\n");
		++i;
	}
}
