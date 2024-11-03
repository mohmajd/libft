/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:02:33 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/10/28 20:02:35 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*p;
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	p = (char *) src;
	src_len = 0;
	dest_len = 0;
	i = 0;
	while (dest[dest_len] && dest_len < size) // rj3 lhad l9lawi
		dest_len++;
	while (p[src_len])
		src_len++;
	if (size <= dest_len)
		return (dest_len + src_len);
	while (i < src_len && i < size - dest_len - 1)
	{
		dest[dest_len + i] = p[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}
/* int main() {
    char dest[20] = "Hello";
    const char *src = " World!";

    // Concatenate src to dest
    size_t result = strlcat(dest, src, sizeof(dest));

    printf("Concatenated string: %s\n", dest);
    printf("Total length of result: %zu\n", result);

    return 0;
} */
