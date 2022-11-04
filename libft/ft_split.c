/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 18:10:50 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/01 16:27:07 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	s_len(const char *str, char sp)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] == sp && str[i] != 0)
		i++;
	while (str[i] != 0)
	{
		if (str[i] != sp)
			count++;
		else
			break ;
		i++;
	}
	return (count);
}

static int	num_str(const char *str, char sp)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] == sp && str[i] != 0)
		i++;
	while (str[i] != 0)
	{
		while (str[i] != sp && str[i] != 0)
			i++;
		count++;
		while (str[i] == sp && str[i] != 0)
			i++;
	}
	return (count);
}

static void	*free_mem(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != 0)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		num_string;

	i = 0;
	num_string = num_str(s, c);
	arr = malloc(sizeof(char *) * (num_string + 1));
	if (!arr)
		return (0);
	while (i < num_string)
	{
		while (*s && *s == c)
			s++;
		arr[i] = ft_substr(s, 0, s_len(s, c));
		if (arr[i] == 0)
			return (free_mem(arr));
		while (*s && *s != c)
			s++;
		i++;
	}
	arr[i] = 0;
	return (arr);
}

//include <stdio.h>

/*char **ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		num_string;
	char	*str;

	str = (char*)s;
	i = 0;
	j = 0;
	num_string = num_str(str, c);
	arr = malloc(sizeof(char*) * (num_string + 1));
	if (!arr)
		return (0);
	while (i < num_string)
	{
		while (*s && *s == c)
			s++;
		arr[i] = malloc(sizeof(char) * (s_len(s, c) + 1));
		while (*s && *s != c)
			s++;
		i++;
	}
	arr[i] = malloc(sizeof(char) * 1);

	i = 0;
	while (i < num_string)
	{
		j = 0;
		while (*str  && *str == c)
			str++;
		while (*str && *str != c)
		{
			arr[i][j] = *str;
			str++;
			j++;
		}
		arr[i][j] = 0;
		i++;
	}
	arr[i] = 0;
	
	return arr;
}*/
