/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 23:26:37 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/01 23:29:01 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dest, const char *src, size_t size)
{
	char	*p;
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	p = (char *)src;
	if (size > 0)
	{
		while (src[len])
			len++;
		while (i < size - 1 && i < len)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
