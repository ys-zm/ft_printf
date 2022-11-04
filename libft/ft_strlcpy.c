/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:24:00 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/01 16:29:12 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

//nul termination, if room
//copy src to dst
//copies of dstsize is not 0
//copies up to dstsize - 1
//if src and dst overlap, undefined behaviouri
//return: total length of the string - i.e. length of src.
//if the return value of >= dstsize, 
//the output string has been truncated

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;

	s_len = ft_strlen(src);
	if (dstsize > 0)
	{
		while (dstsize-- > 1 && *src)
		{
			*dst++ = *src++;
		}
		*dst = 0;
	}
	return (s_len);
}
/*
intmain (void)
{
	char	dst1[30] = "123456789";
	char	dst2[30] = "123456789";
	char	str[] = "aaaaa";

	ft_strlcpy(dst1, str, 10);
	strlcpy(dst2, str, 10);
	//printf("my func: %zu\noriginal: %zu\n", ft_strlcpy(dst1,
	//str, 2), strlcpy(dst2, str, 2));
	printf("my func: %s\noriginal: %s\n", dst1, dst2);
}*/
