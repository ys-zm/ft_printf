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
	

	//printf("my int ret: %d\n ", ft_printf("\001\002\007\v\010\f\r\n"));
	//printf("org int ret: %d\n ", printf("\001\002\007\v\010\f\r\n"));

	printf("mine %d\n", ft_printf("% .  % . %"));
	printf("org: %d\n", printf("% .  % .  %"));
}

