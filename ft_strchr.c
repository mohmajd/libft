/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:03:02 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/01 23:21:10 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	int		i;

	p = (char *)s;
	i = 0;
	while (p[i])
	{
		if (p[i] == c)
			return (p + i);
		i++;
	}
	if (c == '\0')
		return (p + i);
	return (NULL);
}
/* int main() {
    const char str[] = "This is just a String";
    const char ch = 'u';
    char *p;

    // Use strchr to find the first occurrence of 'u'
    p = ft_strchr(str, ch);

    if (p != NULL) {
        printf("String starting from '%c' is: %s\n", ch, p);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
} */
