/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:35:55 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/01 16:12:30 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//locate byte in byte string
//first occurence of c in string s
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		sub;

	if (n == 0)
		return (NULL);
	sub = (unsigned char)c;
	str = (const unsigned char *)s;
	while (n > 0)
	{
		if (*str == sub)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}
