/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:37:16 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/01 16:33:17 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;

	n_len = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		if (ft_strncmp(haystack, needle, n_len) == 0 && len >= n_len)
		{	
			return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
/*int	main(void)
{
	char	str[30] = "aaabcabcd";
	char	str2[10] = "aabcd";

//	printf("my func: %s\n", ft_strnstr(str, "abcd", 9));
	printf("my func: %s\n", ft_strnstr(str, str2, -1));

	printf("original: %s\n", strnstr(str, str2, -1));

}*/
