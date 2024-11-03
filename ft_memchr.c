/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:24:39 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/10/25 22:24:40 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*p;
	char	b;
	size_t	i;

	i = 0;
	b = c;
	p = (char *)str;
	while (i < n)
	{
		if (p[i] == b)
			return (p + i);
		i++;
	}
	return (p);
}
