/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:19:40 by rdi-russ          #+#    #+#             */
/*   Updated: 2022/01/18 12:22:44 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*x;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		x = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = x;
	}
	*lst = 0;
}
