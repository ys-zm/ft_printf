

#include <stdlib.h>
#include <stdio.h>
#include "libftprintf.h"
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>

char	*ft_itoa(int n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	*ft_memmove(void *dst, const void *src, size_t len);
//how it works:
//iteratire over the string, only stopping at %
//that when you know you have a value that you have to convert to a string
//create a buffer to copy relevant parts of the strings
//itoa for %d and %i;
//%x and %X are the same - one CAPS other not.(base16)
//%u - unsigned decimal(base10)
//single % sign is ignored! to print \ or % you have to double them.
/*int main ()
{
	printf("d: %d\ni: %i\nu: %u\nx: %x\nX:%X\n", (-(INT_MIN)-2),(-( INT_MIN)-2), (-(INT_MIN)-2), (-(INT_MIN)-2), (-(INT_MIN)-2));
	printf("what does the \\ mean %%\n");

}*/

/*int	parse_string(char *str, char *dst)
{

}*/

int	ft_printf(const char *str, ...)
{
	va_list		args;
	int		i;
	int		j;
	int		arg_num;
	char		arg_char;
	char		*store;
	char		buf[400] = {0};
	
	va_start(args, str);
	i = 0;
	j = 0;
	arg_num = 0;
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
			if (str[i] == 'c')
			{
				//arg_num = va_arg(args, int);
				buf[j] = va_arg(args, int);
				//printf("char: %c\n", arg_num);
			}
			else if (str[i] == 'd')
			{
				arg_num = va_arg(args, int);
				store = ft_itoa(arg_num);
				ft_strlcpy(&buf[j], store, 300);
				j = j + (strlen(store));
				//arg_num = va_arg(args, int);
				//printf("arg_nums %s\n", store);
			}
			else if (str[i] == 's')
			{
				store = (char *)va_arg(args, const char *);
				ft_strlcpy(&buf[j], store, 300);
				j = j + (strlen(store));
				//printf("arg: %s\n", store);
			}
			j++;
		}
	//	else
		/*{
			i++;
			if (str[i] = 'c')
			{
				arg_num = va_arg(args, char);
				buf[j] = arg_num;
			}
			else if (str[i] == 'd' || str[i] == 'i')
			{
				arg_num = va_arg(args, int);
				buf[j] = arg_num;
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
		}*/
		i++;
	}
	va_end(args);
	printf("buf is: %s\n", buf);
	
	return (0);
}

int	main(void)
{
	ft_printf("here is my string %d, %s", 30, "string");;
}
