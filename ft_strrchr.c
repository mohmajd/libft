/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 23:46:41 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/05 00:22:56 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	b;
	int		i;

	i = ft_strlen(s);
	b = c;
	p = (char *)s;
	while (i >= 0)
	{
		if (p[i] == b)
			return (p + i);
		i--;
	}
	if (p[ft_strlen(s)] == c)
		return (p + i);
	return (p);
}
