/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:30:31 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/03 21:07:06 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;
	unsigned int	k;
	char			*result;

	i = 0;
	k = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i] && strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && strchr(set, s1[j]))
		j--;
	len = j - i;
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	while (k < len + 1)
	{
		result[k] = s1[i + k];
		k++;
	}
	result[k] = '\0';
	return (result);
}

#include <stdio.h>
#include <string.h>
int main()
{

	printf("result is: %s \n", ft_strtrim("         ", "  "));
}