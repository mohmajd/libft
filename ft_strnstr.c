/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 23:43:28 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/03 20:58:29 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*to_find;
	char	*find;
	size_t	i;

	if (!haystack || !needle)
		return (NULL);
	i = 0;
	if (*needle == '\0')
		return (haystack);
	while (i < ft_strlen(haystack))
	{
		to_find = needle;
		find = haystack;
		while (*to_find == *find && (*to_find != '\0'))
		{
			to_find++;
			find++;
		}
		if (*to_find == '\0')
			return (haystack);
		haystack++;
		i++;
	}
	return (NULL);
}
