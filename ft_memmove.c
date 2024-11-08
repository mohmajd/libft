/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 00:03:32 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/08 22:08:11 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill(unsigned char *p1, const unsigned char *p2,size_t n)
{
	size_t	i;

	i = 0;
	if (p1 < p2)
	{
		i = 0;
		while (i < n)
		{
			p1[i] = p2[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			p1[i - 1] = p2[i - 1];
			i--;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*p1;
	const unsigned char	*p2;

	p1 = (unsigned char *)dst;
	p2 = (const unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (n == 0)
		return (dst);
	ft_fill(p1, p2, n);
	return (dst);
}
