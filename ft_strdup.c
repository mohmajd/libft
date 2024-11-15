/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 23:21:45 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/15 00:26:52 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		srclen;
	char	*dest;

	i = 0;
	srclen = ft_strlen(s1);
	dest = malloc(sizeof(char) * (srclen + 1));
	if (dest == NULL)
		return (NULL);
	while (i < srclen)
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
