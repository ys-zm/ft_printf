#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("ret value of mine: %d\n", ft_printf("example string %u\n", -2147483647));
	printf("ret value original: %d\n", printf("example string %u\n", -2147483647));
	//
	
	// printf("%d\n", write_int(100));
}

//ive got problem with wrapping with u.
