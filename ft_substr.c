/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:17:38 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/01 23:55:30 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*l;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	l = (char *) s;
	while (l[i])
		i++;
	if (start >= i)
	{
		sub = (char *)malloc(1);
		if (sub)
			sub[0] = '\0';
		return (sub);
	}
	if ((len > i + start))
		len = i + start;
	sub = (char *) malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = l[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*int main() {
    const char *original = "Hello, World!";
    unsigned int start = 7;  // Starting index for substring
    size_t len = 9;          // Maximum length of substring

    // Get the substring using ft_substr
    char *substring = ft_substr(original, start, len);

    // Check if the substring was created successfully
    if (substring != NULL) {
        printf("Original string: %s\n", original);
        printf("Substring: %s\n", substring);
        free(substring); // Free the allocated memory for the substring
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
