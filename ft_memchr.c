/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:24:39 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/04 21:10:56 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)str;
	while (i < n)
	{
		if (p[i] == (char)c)
			return (p + i);
		i++;
	}
	return (p);
}
