/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:36:30 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/09 18:03:50 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;
	
	i = 0;
	str = malloc(ft_strlen(s1) * 1 + 1);
	if (str)
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
