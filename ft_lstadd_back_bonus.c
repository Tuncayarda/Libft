/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:09:55 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/10 21:04:57 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l_ptr;

	if (!lst || !(*lst))
	{
		*lst = new;
		return ;
	}
	l_ptr = ft_lstlast(*lst);
	(l_ptr)->next = new;
}
