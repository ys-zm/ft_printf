/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:33:11 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/01 16:33:48 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		s_len;
	int		i;
	char	*str;

	str = (char *)s;
	s_len = ft_strlen(str);
	i = s_len - 1;
	if ((char)c == 0)
		return (&str[s_len]);
	while (s_len-- > 0)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i--;
	}
	return (0);
}
