/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:33:57 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/01 16:30:48 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

//compares not more than n characters.
//return int >, + or < 0. - if s1 is >, + < s2.
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- > 0)
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		if (*(unsigned char *)s1 == 0 || *(unsigned char *)s2 == 0)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
/*int	main(void)
{
	char s1[] = "test\200";
	char s2[] = "test\0";

	printf("my func: %d\noriginal: %d\n", ft_strncmp(s1, s2, 5), strncmp(s1, s2,5));
		
}*/
