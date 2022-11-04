/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 13:00:38 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/01 15:56:01 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev;

	if (!lst || !del)
		return ;
	prev = *lst;
	while (*lst != NULL)
	{
		prev = *lst;
		(*del)((*lst)->content);
		*lst = (*lst)->next;
		free(prev);
	}
}
