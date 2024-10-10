/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:04:14 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/10 14:03:31 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	first = 0;
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	last = ft_strlen(s1) - 1;
	while (last >= first && ft_strchr(set, s1[last]))
		last--;
	str = ft_substr(s1, first, last - first + 1);
	return (str);
}
