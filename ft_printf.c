/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 21:52:43 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/22 15:06:33 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

static size_t	ft_write_s(char *str)
{
	size_t	ret;

	if (!str)
	{
		write(1, "(null)", 6);
		ret = 6;
	}
	else
	{
		ret = ft_strlen(str);
		write(1, str, ret);
	}
	return (ret);
}

static size_t	ft_write_c(char c)
{
	write(1, &c, 1);
	return (1);
}

static size_t	ft_write_modulo(void)
{
	char	x;

	x = '%';
	return (write(1, &x, 1));
}

static size_t	ft_format(char c, va_list *args)
{
	size_t	ret_len;

	ret_len = 0;
	if (c == 'c')
		ret_len = ft_write_c(va_arg(*args, int));
	else if (c == 'd' || c == 'i')
		ret_len = ft_write_int(va_arg(*args, int));
	else if (c == 's')
		ret_len = ft_write_s(va_arg(*args, char *));
	else if (c == 'p')
		ret_len = ft_write_ptr(va_arg(*args, size_t));
	else if (c == 'x')
		ret_len = ft_write_hex(va_arg(*args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		ret_len = ft_write_hex(va_arg(*args, unsigned int), "0123456789ABCDEF");
	else if (c == 'u')
		ret_len = ft_write_uint(va_arg(*args, unsigned int));
	else if (c == '%')
		ret_len = ft_write_modulo();
	return (ret_len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	size_t	ret;

	va_start(args, str);
	i = 0;
	ret = 0;
	if (ft_error_check(str) == 1)
		return (-1);
	while (str && str[i])
	{
		if (str[i] != '%')
			ret += write(1, &str[i], 1);
			//ret++;
		else
			ret += ft_format(str[++i], &args);
		if (str[i] != 0)
			i++;
	}
	va_end(args);
	return (ret);
}

int	main(void)
{
	printf("output mine: %d\n", ft_printf("%X", 123456));
	printf("output org: %d\n", printf("%X", 123456));
}
