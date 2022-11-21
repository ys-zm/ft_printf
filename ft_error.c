/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_error.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/21 16:15:34 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/21 16:19:09 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_error_check(const char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] != 's' && str[i] != 'c' && str[i] != 'd'
				&& str[i] != 'i' && str[i] != 'u' && str[i] != 'x'
				&& str[i] != 'X' && str[i] != '%' && str[i] != 'p')
				return (1);
		}
		if (str[i] != '\0')
			i++;
	}
	return (0);
}
