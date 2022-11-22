/ ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/15 17:27:47 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/22 17:36:31 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_len(size_t nb, size_t base)
{
	size_t		count;

	count = 0;
	if (nb == 0)
		count = 1;
	while (nb != 0)
	{
		nb /= base;
		count++;
	}
	return (count);
}

static char	*list_size(size_t base_num, size_t nb)
{
	char	*list;
	size_t	len;

	len = ft_len(nb, base_num);
	list = malloc(sizeof(char) * (len + 1));
	if (!list)
		return (NULL);
	list[len] = '\0';
	return (list);
}

static void	ft_putnbr_hex(size_t nb, char *base)
{
	size_t		remainder;
	size_t		i;
	char		*list;
	size_t		len;

	len = ft_len(nb, 16);
	i = len - 1;
	remainder = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	list = list_size(16, nb);
	while (nb != 0)
	{
		remainder = nb % 16;
		nb /= 16;
		list[i--] = base[remainder];
	}
	write(1, list, len);
	free(list);
}

size_t	ft_write_hex(size_t nb, char *base)
{
	size_t	ret;

	ret = ft_len(nb, 16);
	ft_putnbr_hex(nb, base);
	return (ret);
}
/*int	main(void)
{
	unsigned int x;

	x = INT_MIN;
	
	ft_write_hex(x, "0123456789abcdef");
	//printf("%x\n", INT_MIN);

}*/
