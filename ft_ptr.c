#include "ft_printf.h"


//printing address in hexadecimal form.
size_t	ft_ptr(size_t ptr)
{
	unsigned long	n;
	size_t	i;

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
		i += ft_write_hex(ptr, "0123456789abcdef");
	}
	return (i);
}

size_t	ft_write_ptr(size_t ptr)
{
	size_t ret;

	ret = ft_ptr(ptr);
	return (ret);
}
