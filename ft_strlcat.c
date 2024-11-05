/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:02:33 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/04 23:10:24 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_len;

	dest_len = ft_strlen(dst);
	i = 0;
	if (dest_len >= dstsize)
		dest_len = dstsize;
	if (dest_len == dstsize)
		return (dest_len + ft_strlen(src));
	if (ft_strlen < dstsize - dest_len)
	{
		while (i++ < ft_strlen)
		{
			dst[i + dest_len] = src[i];
		}
	}
	else
	{
		while (i++ < dstsize - ft_strlen(src) - 1)
		{
			dst[dest_len + i] = src[i];
		}
	}
	dst[dest_len + i] = '\0';
	return (ft_strlen(src) + dest_len);
}
