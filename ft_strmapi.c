/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:18:06 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/01 23:40:24 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				j;
	char			*result;

	if (!s || !f)
		return (NULL);
	j = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (j + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < j)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
