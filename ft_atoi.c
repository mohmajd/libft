/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:15:48 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/04 20:45:08 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(const	char *str)
{
	int	signe;
	int	i;
	int	r;

	signe = 1;
	i = 0;
	r = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			signe *= (-1);
		}
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		r = r * 10 + (str[i] - 48);
		i++;
	}
	return (r * signe);
}
