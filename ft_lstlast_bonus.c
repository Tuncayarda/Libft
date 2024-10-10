/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:43:18 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/10 19:09:10 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*l_ptr;

	if (!lst)
		return (NULL);
	l_ptr = lst;
	while (l_ptr->next != NULL)
		l_ptr = l_ptr->next;
	return (l_ptr);
}
