/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 14:20:36 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/01 16:34:10 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	is_in_set(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start_i;
	int		end_i;

	start_i = 0;
	end_i = ft_strlen(s1) - 1;
	while (start_i < end_i)
	{
		if (!is_in_set(set, s1[start_i]))
			break ;
		start_i++;
	}
	if (start_i == end_i)
		return (ft_substr(&s1[end_i], 0, 0));
	else
	{
		while (end_i > 0)
		{
			if (!is_in_set(set, s1[end_i]))
				break ;
			end_i--;
		}
	}
	return (ft_substr(s1, start_i, (end_i - start_i + 1)));
}
/*int	main(void)
{
	char str[] = " ";

	printf("%s\n", ft_strtrim(str, " "));

}*/
