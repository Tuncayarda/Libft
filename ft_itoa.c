/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:33:17 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/10 14:45:56 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_sizeof_int(long num)
{
	size_t	rtn;

	rtn = 0;
	if (!num)
		return (1);
	else if (num < 0)
	{
		num = -num;
		rtn++;
	}
	while (num > 0)
	{
		rtn++;
		num /= 10;
	}
	return (rtn);
}

char	*ft_itoa(int n)
{
	size_t	size;
	size_t	i;
	char	*str;
	long	num;

	i = 0;
	num = (long)n;
	size = ft_sizeof_int(num);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	if (!num)
		str[0] = '0';
	if (num < 0)
	{
		num = -num;
		str[0] = '-';
	}
	while (num > 0)
	{
		str[size - 1 - i++] = num % 10 + 48;
		num /= 10;
	}
	str[size] = '\0';
	return (str);
}
