/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 23:43:28 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/05 19:39:12 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		t;

	if (*needle == '\0' || len == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		t = 0;
		while (haystack[i + t] && haystack[i + t] == needle[t] && (i + t) < len)
			t++;
		if (needle[t] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
