/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:27:34 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/01 16:28:50 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

//append src to dst. append at most dstsize 
//- strlen(dst) - 1. nul terminate.
//overlapping src and dst = undefined behaviour
//return total length of dst plus length of src
//make sure the return value is correc.
//i.e. if dstsize is smaller, that the value you take!

static size_t	dst_size(char *dst, size_t dstsize)
{
	size_t	d_len;

	d_len = ft_strlen(dst);
	if (dstsize < d_len)
		d_len = dstsize;
	return (d_len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;

	s_len = ft_strlen(src);
	d_len = dst_size(dst, dstsize);
	i = 0;
	if (d_len == dstsize)
		return (dstsize + s_len);
	while (i++ < d_len)
		dst++;
	if (dstsize > 0)
	{
		while (dstsize-- - d_len - 1 && *src)
		{
			*dst++ = *src++;
		}
		*dst = 0;
	}
	return (s_len + d_len);
}
/*int main(void)
{
	char dst1[30] = "123456789";
	char dst2[30] = "123456789";
	char src[] = "aaaaaa";

	//prinf("return value: %d\n", strlcat(dst2, src, 4));
	//prinf("return value: %d\n", strlcat(dst2, src, 4));
	printf("return value: %lu\n", strlcat(dst2, src, 9));
	//ft_strlcat(dst1, src, 1);
	printf("original: %s\n", dst2);
}*/
