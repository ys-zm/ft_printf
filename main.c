#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int	d;
	int	*c;

	char o;
	char *x;

	o = 'O';
	x = &o;
	d = 10;
	c = &d;

	//printf("int min %d ->", ft_printf(" %x \n", INT_MIN));
	//printf("int max %d ->", ft_printf(" %x \n", INT_MAX));
	//printf("long max %d ->", ft_printf(" %x \n", LONG_MAX));
	//printf("long min %d ->", ft_printf(" %x \n", LONG_MIN));
	//printf("mine %d\n", ft_printf(" %x", 0));
	//printf("org %d\n", ft_printf(" %x", 0));

	
	printf("ret value of mine: %d\n", ft_printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	printf("ret value of mine: %d\n", printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
//	printf("ret value original: %d\n", printf(" %d %x", 9, -42));
	printf(" my ret: %d\n ", ft_printf(" %x ",  LONG_MIN));
	printf(" org ret: %d\n ", printf(" %x ", LONG_MIN));
//printf(" my int ret: %d\n ", printf(" %x %p",  INT_MIN, INT_MIN));
//printf(" org int ret: %d\n ", printf(" %x %p", INT_MIN, INT_MIN));

	
	
	
}

//ive got problem with wrapping with u.
