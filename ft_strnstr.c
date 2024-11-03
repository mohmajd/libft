/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 23:43:28 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/01 23:46:10 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*p1;
	char	*p2;
	char	*to_find;
	char	*find;
	size_t	i;

	i = 0;
	p1 = (char *) big;
	p2 = (char *) little;
	if (*p2 == '\0')
		return (0);
	else
	{
		while (i < len)
		{
			to_find = p2;
			find = p1;
			while (*to_find == *find && (*to_find != '\0'))
			{
				to_find++;
				find++;
			}
			if (*to_find == '\0')
				return (p1);
			p1++;
			i++;
		}
	}
	return (0);
}
