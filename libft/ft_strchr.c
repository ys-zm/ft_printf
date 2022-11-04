/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:31:46 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/01 16:27:21 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		ft_memset(NULL, 1, 1);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == 0)
		return ((char *)s);
	return (NULL);
}
/*int	main(void)
{
	char str[] = "tripouille";
	char str2[] = "tripouille";

	printf("my func: %s\n", ft_strchr(str, 't' + 256));
	printf("original: %s\n", strchr(str2, 't' + 256));
}*/
