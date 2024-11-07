/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 00:03:32 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/07 17:07:29 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	i = 0;
	p1 = (unsigned char *)dst;
	p2 = (unsigned char *)src;
	if (!dst || !src)
		return (NULL);
	if (p1 > p2)
	{
		while (n--)
			p1[n] = p2[n];
	}
	else
	{
		while (i++ < n)
			p1[i] = p2[i];
	}
	return (dst);
}
