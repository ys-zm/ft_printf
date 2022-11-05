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

/*static void	write_array_backwards(char list[])
{
	int	size;

	size = ft_strlen(list);
	while (size >= 0)
	{
		write(1, &list[size], 1);
		size--;
	}	
}*/

static char	*list_size(size_t base_num, size_t nb)
{
	char	*list;
	size_t	len;

	len = ft_size_of_num(nb, base_num);
	if (nb < 0)
		len--;
	list = malloc(sizeof(char) * (len));
	if (!list)
		return (NULL);
	return (list);

}

static void	ft_putnbr_hex(size_t nb, char *base)
{
	//unsigned int	num;
	size_t		remainder;
	size_t		i;
	char		*list;

	i = ft_size_of_num(nb, 16) - 1;
	//num = nb;
	remainder = 0;
	list = list_size(16, nb);
	if (nb < 0)
	{
		nb = (nb * -1);
	}
	if (nb == 0)
		write(1, "0", 1);
	while (nb != 0)
	{
		remainder = nb % 16;
		nb /= 16;
		list[i] = base[remainder];
		i--;
	}
	//write_array_backwards(list);
	write(1, list, ft_size_of_num(nb, 16));
	free(list);
}

size_t	ft_write_hex(size_t nb, char *base)
{
	size_t	ret;

	ret = ft_size_of_num(nb, 16);
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
