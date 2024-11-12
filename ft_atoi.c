/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:15:48 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/12 21:18:11 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sign(const char **str)
{
	int	signe;

	signe = 1;
	while (**str == ' ' || **str == '\n' || **str == '\t'
		|| **str == '\v' || **str == '\f' || **str == '\r')
		(*str)++;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			signe *= (-1);
		(*str)++;
	}
	return (signe);
}

int	ft_atoi(const	char *str)
{
	unsigned long	r;
	int				signe;

	r = 0;
	signe = ft_sign(&str);
	while (*str <= '9' && *str >= '0')
	{
		r = r * 10 + (*str - 48);
		str++;
	}
	if (r > LONG_MAX && signe == 1)
		return (-1);
	if (r > (unsigned long)LONG_MAX + 1 && signe == -1)
		return (0);
	return ((int)r * signe);
}
