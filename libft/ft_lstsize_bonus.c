/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 12:27:44 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/01 16:12:11 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	count = 0;
	temp = lst;
	while (temp != 0)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

/*int	ft_lstsize(t_list ***lst)
{
	int		count;

	count = 0;
	while (*lst != 0)
	{
		*lst = (*lst)->next;
		count++;
	}
	return (count);
}

int main(void)
{
	t_list	**lst;
	size_t	i;

	i = ft_lstsize(lst);

}*/
