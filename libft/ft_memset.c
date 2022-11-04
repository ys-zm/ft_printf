/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:48:59 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/01 16:33:31 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*x;

	x = (unsigned char *)b;
	while (len-- > 0)
	{
		*x = c;
		x++;
	}
	return ((void *)b);
}
/*
int	main(void)
{
	char	dst[20] = "Hello";
	char	dst2[20] = "Hello";

	ft_memset((void *)dst, 0, 10);
	memset((void *)dst2, 0, 10);
	printf("own: %s\noriginal: %s\n", dst, dst2);
}*/
