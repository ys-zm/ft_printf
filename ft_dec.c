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

size_t	ft_size_of_num(int nb, size_t base)
{
	size_t		count;
	unsigned int	num;

	num = nb;
	count = 0;
	if (nb < 0)
	{
		num = nb * -1;
		count++;
	}
	if (num == 0)
		count = 1;
	while (num != 0)
	{
		num /= base;
		count++;
	}
	return (count);
}

size_t	ft_write_int(int nb)
{
	size_t	ret;

	ret = 0;
	ft_putnbr(nb);
	ret = ft_size_of_num(nb, 10);
	return (ret);
}
