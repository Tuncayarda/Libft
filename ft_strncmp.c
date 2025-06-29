/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:59:25 by tuaydin           #+#    #+#             */
/*   Updated: 2025/06/29 16:18:15 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	define_diff(unsigned char c1, unsigned char c2)
{
	if (c1 > c2)
		return (1);
	else if (c1 < c2)
		return (-1);
	else
		return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((unsigned char)s1[i] && (unsigned char)s2[i] && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return (define_diff((unsigned char)s1[i], (unsigned char)s2[i]));
		i++;
	}
	if (i != n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return (define_diff((unsigned char)s1[i], (unsigned char)s2[i]));
	}
	return (0);
}
