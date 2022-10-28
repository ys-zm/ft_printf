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

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

//function adds an extra count for the minus sign
////converts to +ve to count len
static int	len(int n)
{
	unsigned int	x;
	int				i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		x = n * -1;
		i ++;
	}
	else
		x = n;
	while (x > 0)
	{
		x /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	x;
	char			*str;
	int				i;

	x = n;
	i = len(n) - 1;
	str = malloc(sizeof(char) * (i + 2));
	if (!str)
		return (0);
	str[i + 1] = (0);
	if (n == 0)
		str[i] = '0';
	if (n < 0)
	{
		x = n * -1;
		str[0] = '-';
	}
	while (x > 0)
	{
		str[i] = (x % 10) + 48;
		x /= 10;
		i--;
	}
	return (str);
}

/*int	main(void)
{
	char	*s;

	s = ft_itoa(9);
	printf("final: %s\n", s);
}*/
