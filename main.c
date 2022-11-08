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
	

	printf("my int ret: %d\n ", ft_printf("%y ", INT_MIN));
	printf("org int ret: %d\n ", printf("%y ", INT_MIN));
}

