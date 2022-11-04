/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 17:04:51 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/01 16:21:26 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*b_dst;
	char	*b_src;

	if (!dst && !src)
		return (NULL);
	b_src = (char *)src;
	b_dst = (char *)dst;
	if (src < dst)
	{
		b_src += len - 1;
		b_dst += len - 1;
		while (len --)
			*b_dst-- = *b_src--;
	}
	else
	{	
		while (len--)
		{
			*b_dst++ = *b_src++;
		}
	}
	return ((void *)dst);
}
/*
int	main(void)
{
	char	dst[20] = "Hello";
	char	dst2[20] = "Hello";
	char	*src = "hi";

	ft_memmove((void *)dst, (const void *)src, 10);
	memmove((void *)dst2, (const void *)src, 10);
	printf("own: %s\noriginal: %s\n", dst, dst2);
}*/
