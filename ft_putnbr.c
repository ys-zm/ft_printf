/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:50:19 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/04 16:46:48 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}


static void	if_negative(void)
{
	write(1, "-", 1);
}

static void	min_int(void)
{
	write(1, "-2147483648", 11);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		min_int();
		return ;
	}
	else if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (n < 0)
	{
		if_negative();
		n = n * -1;
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
/*int	main(void)
{
	ft_putnbr_fd(-57, 1);
}*/
