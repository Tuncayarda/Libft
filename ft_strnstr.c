/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:26:02 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/09 16:07:27 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;
	size_t	i;
	size_t	j;

	i = 0;
	n_len = ft_strlen(needle);
	if (n_len == 0)
		return ((char *)haystack);
	while (i <= (len - n_len) && haystack[i] && !(n_len > len))
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j])
			j++;
		if (j == n_len)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
