/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:27:39 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/09 14:44:47 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if ((dst == src) || len == 0)
		return (dst);
	if (dst < src)
	{
		while (i < len)
		{
			((unsigned char *)(dst))[i] = ((unsigned char *)(src))[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			len--;
			((unsigned char *)(dst))[len] = ((unsigned char *)(src))[len];
		}
	}
	return (dst);
}
