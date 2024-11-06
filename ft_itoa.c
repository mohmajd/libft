/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:25:28 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/05 18:29:44 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		count++;
		nb = -nb;
	}
	else if (nb == 0)
		count++;
	while (nb != 0)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nb;
	int		j;

	nb = n;
	j = count(nb);
	result = malloc(sizeof(char) * (j + 1));
	if (result == NULL)
		return (NULL);
	result[j] = '\0';
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	else if (nb == 0)
		result[0] = '0';
	while (nb > 0)
	{
		result [--j] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (result);
}
