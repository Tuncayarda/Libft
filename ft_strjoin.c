/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:52:05 by tuaydin           #+#    #+#             */
/*   Updated: 2025/05/28 22:13:47 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr;
	size_t	total_len;
	size_t	i;

	if (!s1 && !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = malloc(total_len * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		ptr[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	ptr[ft_strlen(s1) + i] = '\0';
	return (ptr);
}
