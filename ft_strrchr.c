/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 23:46:41 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/15 00:32:56 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	b;
	int		i;

	i = ft_strlen(s);
	b = (char)c;
	while (i >= 0)
	{
		if (s[i] == b)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
