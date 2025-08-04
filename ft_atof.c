/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 01:05:44 by tuaydin           #+#    #+#             */
/*   Updated: 2025/08/05 01:51:26 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	ft_atof(const char *str)
{
	float	result;
	float	decimal;
	int		sign;

	if (!str)
		return (0.0f);
	result = 0.0f;
	decimal = 0.1f;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (*str >= '0' && *str <= '9')
		result = result * 10 + (*str++ - '0');
	if (*str == '.')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result += (*str++ - '0') * decimal;
		decimal *= 0.1f;
	}
	return (result * sign);
}
