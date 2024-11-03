/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 23:46:41 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/01 23:48:24 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*p ;
	char	b;
	int		i;

	i = 0;
	b = c;
	p = (char *)str;
	while (p[i])
		i++;
	while (i >= 0)
	{
		if (p[i] == b)
			return (p + i);
		i--;
	}
	return (p);
}
