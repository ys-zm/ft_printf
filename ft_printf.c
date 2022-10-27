

#include <stdlib.h>
#include <stdio.h>
#include "libftprintf.h"
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>


//how it works:
//iteratire over the string, only stopping at %
//that when you know you have a value that you have to convert to a string
//create a buffer to copy relevant parts of the strings
//itoa for %d and %i;
//%x and %X are the same - one CAPS other not.(base16)
//%u - unsigned decimal(base10)
//single % sign is ignored! to print \ or % you have to double them.
int main ()
{
	printf("d: %d\ni: %i\nu: %u\nx: %x\nX:%X\n", (-(INT_MIN)-2),(-( INT_MIN)-2), (-(INT_MIN)-2), (-(INT_MIN)-2), (-(INT_MIN)-2));
	printf("what does the \\ mean %%\n");

}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int	i;
	int	j;
	int	arg_num;
	char	buf[400] = {0};
	
	va_start(arg, str);
	i = 0;
	j = 0;
	while (str && str[i])
	{
		if (str[i] != '%')
		{
			buf[j] = str[i];
			j++;
		}
		else
		{
			i++;
			if (str[i] = 'c')
			{
				arg_num += va_arg(arg, str);
				buf[j] = str[arg_num];
			}
			else if (str[i] == 'd' || str[i] == 'i')
			{
			}
			else if (str[i] == 'u')
			{
			}
			else if (str[i] == 'x')
			{
			}
			else if (str[i] == 'X')
			{
			}
			else if (str[i] == '%')
				buf[j] = '%';
			j++;
		}
	


		i++;
	}
	
	return (NULL);
}
