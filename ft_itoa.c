/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:25:28 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/02 00:02:00 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
		return (11);
	else if (nb < 0)
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
	int		k;
	int		j;

	k = count(n);
	j = k;
	nb = n;
	result = malloc(sizeof(char) * (k + 1));
	if (result == NULL)
		return (NULL);
	else if (nb < 0)
	{
		nb = -nb;
		while (k > 1)
		{
			result[k - 1] = (nb % 10) + 48;
			nb = nb / 10;
			k--;
		}
		result[0] = '-';
	}
	else if (nb == 0)
		result[0] = '0';
	else
	{
		while (k > 0)
		{
			result [k - 1] = (nb % 10) + 48;
			nb = nb / 10;
			k--;
		}
	}
	result[j] = '\0';
	return (result);
}
