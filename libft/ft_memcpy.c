/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 17:12:41 by yzaim         #+#    #+#                 */
/*   Updated: 2022/10/18 11:33:26 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*save;
	const char	*source;

	if (dst == (void *)0 && !src)
		return (NULL);
	save = (char *)dst;
	source = (const char *)src;
	while (n > 0)
	{
		*save = *source;
		save++;
		source++;
		n--;
	}
	return ((void *)dst);
}

/*int	main(void)
{
	char	*dst1;
	char	*dst2;
	char	*source;


	dst1 = "123456789";
	dst2 = NULL; 
	source = NULL; 

	ft_memcpy(dst1, source, 0);
	memcpy(dst2, source, 9);
	printf("my function: %s\n original function: %s\n", dst1, dst2);
}*/
