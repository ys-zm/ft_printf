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

char	*ft_itoa(unsigned int n)
{
	char	*str;
	size_t	i;

	i = len(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
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

/*int	main(void)
{
	char	*s;

	s = ft_itoa(9);
	printf("final: %s\n", s);
}*/
