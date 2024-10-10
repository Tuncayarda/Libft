/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:05:18 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/10 21:28:50 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l_ptr;

	if (!lst || !(*lst))
		return ;
	l_ptr = *lst;
	while (l_ptr != NULL)
	{
		if (del != NULL && l_ptr->content != NULL)
			del(l_ptr->content);
		*lst = l_ptr->next;
		free(l_ptr);
		l_ptr = *lst;
	}
}
