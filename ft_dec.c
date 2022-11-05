/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hex.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/03 11:42:34 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/04 19:00:46 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

size_t	ft_size_of_num(size_t nb, size_t base)
{
	size_t	count;

	count = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		count++;
	}
	if (nb == 0)
		count = 1;
	while (nb != 0)
	{
		nb /= base;
		count++;
	}
	return (count);
}

size_t	ft_write_int(int nb)
{
	size_t	ret;

	ret = 0;
	ft_putnbr_fd(nb, 1);
	ret = ft_size_of_num(nb, 10);
	return (ret);
}

size_t	ft_write_uint(unsigned int nb)
{
	char	*u_write;

	u_write = ft_itoa(nb);
	write(1, u_write, ft_strlen(u_write));
	return (ft_strlen(u_write));
}

