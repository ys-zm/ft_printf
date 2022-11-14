/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ptr.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 11:41:47 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/14 12:09:05 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//printing address in hexadecimal form.
size_t	ft_ptr(size_t ptr)
{
	uintptr_t	n;
	size_t		i;

	n = ptr;
	i = 0;
	if (!n)
	{
		i = 3;
		write(1, "0x0", 3);
	}
	else
	{
		write(1, "0x", 2);
		i = 2;
		if (ptr == '\0')
			write(1, "10", 2);
		i += ft_write_hex(n, "0123456789abcdef");
	}
	return (i);
}

size_t	ft_write_ptr(size_t ptr)
{
	size_t	ret;

	ret = ft_ptr(ptr);
	return (ret);
}
