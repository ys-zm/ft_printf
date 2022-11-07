/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/15 17:27:47 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/04 18:55:35 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_len(size_t nb, size_t base)
{
	size_t		count;
	unsigned int	num;

	num = nb;
	count = 0;
//	if (nb < 0)
//	{
//		num = nb * -1;
//		count++;
//	}
	if (num == 0)
		count = 1;
	while (num != 0)
	{
		num /= base;
		count++;
	}
	return (count);
}

static char	*list_size(size_t base_num, size_t nb)
{
	char	*list;
	size_t	len;

	len = ft_len(nb, base_num);
	if (nb < 0)
		len--;
	list = malloc(sizeof(char) * (len));
	if (!list)
		return (NULL);
	return (list);

}

static void	ft_putnbr_hex(size_t nb, char *base)
{
	unsigned int	num;
	size_t		remainder;
	size_t		i;
	char		*list;

	i = ft_len(nb, 16) - 1;
	num = nb;
	remainder = 0;
	list = list_size(16, nb);
	if (nb < 0)
	{
		num = (nb * -1);
	}
	if (nb == 0)
		write(1, "0", 1);
	while (num != 0)
	{
		remainder = num % 16;
		num /= 16;
		list[i--] = base[remainder];
	}
	//write_array_backwards(list);
	write(1, list, ft_len(nb, 16));
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
	ft_putnbr_base(-30, "0123456789abcdef");
	//write(1, "\n100", 3);
	printf("%x\n", -30);


	//printf("usigned int: %u vs signed: %d\n", -99, -99);
}*/
