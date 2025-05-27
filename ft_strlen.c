/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:18:29 by tuaydin           #+#    #+#             */
/*   Updated: 2025/05/27 04:19:22 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	count;

	count = 0;
	if (!str)
		return (count);
	while (*str++)
		count++;
	return (count);
}
