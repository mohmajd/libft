/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 23:46:41 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/05 18:32:32 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	b;
	int		i;

	i = ft_strlen(s);
	b = (char)c;
	p = (char *)s;
	while (i >= 0)
	{
		if (p[i] == b)
			return (p + i);
		i--;
	}
	return (NULL);
}
