/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/15 14:47:39 by yzaim         #+#    #+#                 */
/*   Updated: 2022/10/17 17:08:41 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "ft_printf.h"

//function adds an extra count for the minus sign
// converts to +ve to count len
static size_t	len(unsigned int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_utoa(unsigned int n)
{
	char	*str;
	size_t	i;

	i = len(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = 0;
	if (n == 0)
		str[i] = '0';
	while (n != 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (str);
}

size_t	ft_write_uint(unsigned int nb)
{
	char	*u_str;
	size_t	ret;

	u_str = ft_utoa(nb);
	ret = ft_strlen(u_str);
	write(1, u_str, ret);
	free(u_str);
	return (ret);
}

/*int	main(void)
{

	ft_write_uint(-2147483647);
}*/
