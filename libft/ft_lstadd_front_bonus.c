/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front_bonus.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 12:12:20 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/01 16:08:42 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

//t_list *new ---> a pointer to a s_list struct variable
//storing both content and location of 'next' (pointer to struct)
//t_list **lst ---> pointer to a t_list pointer 
//pointing to first variable of the linked list;
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
