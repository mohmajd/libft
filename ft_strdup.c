/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 23:21:45 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/01 23:21:47 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		srclen;
	char	*src;
	char	*dest;

	srclen = 0;
	i = 0;
	src = (char *)s1;
	while (src[srclen])
		srclen++;
	dest = malloc(sizeof(char) * (srclen + 1));
	if (dest == NULL)
		return (NULL);
	while (i < srclen)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* int main() {
    const char *original = "Hello, World!";
    
    // Duplicate the original string
    char *duplicate = strdup(original);
    
    // Check if duplication was successful
    if (duplicate == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    
    // Print the original and duplicated strings
    printf("Original: %s\n", original);
    printf("Duplicate: %s\n", duplicate);
    
    // Free the allocated memory for the duplicate
    free(duplicate);
    
    return 0;
}*/
