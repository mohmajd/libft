/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 23:21:45 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/05 00:24:20 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		srclen;
	char	*src;
	char	*dest;

	i = 0;
	src = (char *)s1;
	srclen = ft_strlen(src);
	dest = malloc(sizeof(char) * (srclen + 1));
	if (dest == NULL)
		return (NULL);
	while (i < srclen)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
