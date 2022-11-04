/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 15:32:39 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/01 16:34:34 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	size;

	size = ft_strlen(s);
	i = 0;
	if (*s == 0)
		return (ft_strdup(s));
	if (start > size)
		return (ft_strdup(""));
	if (start + len > size)
		len = size - start;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (len > 0 && start < size)
	{
		sub[i] = s[start];
		i++;
		start++;
		len--;
	}
	sub[i] = 0;
	return (sub);
}
/*int	main(void)
{
	char str[] = "123456789";


	printf("%s\n", ft_substr(str, 10, 5));
}*/
