/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:04:40 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/01 16:02:05 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	return ((ft_isalpha(c)) || (ft_isdigit(c)));
}
