/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 21:52:43 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/04 18:58:33 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

//char	*ft_itoa(int n);
//size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
//void	*ft_memmove(void *dst, const void *src, size_t len);
//int		ft_strlen(const char *s);

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

static size_t ft_write_s(char *str)
{
	size_t	ret;

	ret = ft_strlen(str);
	write(1, str, ret);
	return (ret);
}

static size_t ft_write_c(char c)
{
	write(1, &c, 1);
	return (1);
}

static size_t	ft_format(char c, va_list args)
{
	size_t	ret_len;

	ret_len = 0;
	if (c == 'c')
		ret_len += ft_write_c(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		ret_len += ft_write_int(va_arg(args, int));
	else if (c == 's')
		ret_len += ft_write_s(va_arg(args, char *));
	//else if (c == p)
	//{
	//}
	else if (c == 'x')
		ret_len += ft_write_hex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		ret_len += ft_write_hex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (c == 'u')
		ret_len += ft_write_uint(va_arg(args, unsigned int));
	else if (c == '%')
		write(1, "%", 1);
	return (ret_len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t		i;
	size_t	ret;
	
	va_start(args, str);
	i = 0;
	ret = 0;
	while (str && str[i])
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			ret++;
		}
		else
		{
			i++;
			ret += ft_format(str[i], args);
		}
		if (str[i] != 0)
			i++;
	}
	va_end(args);
	return (ret);
}

/*int	main(void)
{
	ft_printf("here is my string, %x\n", -2147477);

	printf("original: %x\n", -2147477);
	//ft_write_uint(300);
}*/
