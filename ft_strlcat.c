/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:23:51 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/08 20:18:48 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_curs;
	size_t	src_curs;
	size_t	dst_len;
	size_t	src_len;

	dst_curs = 0;
	src_curs = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0 || dstsize <= dst_len)
		return (dstsize + src_len);
	while (dst[dst_curs])
		dst_curs++;
	while (src_curs < dstsize - dst_len - 1 && src[src_curs])
		dst[dst_curs++] = src[src_curs++];
	dst[dst_curs] = '\0';
	return (dst_len + src_len);
}
