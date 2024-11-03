/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 00:03:32 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/02 00:04:00 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (unsigned char *)dest;
	p2 = (const unsigned char *)src;
	if (p1 < p2)
	{
		i = 0;
		while (i < n)
		{
			p1[i] = p2[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			p1[n - 1] = p2[n - 1];
			n--;
		}
	}
	return (dest);
}
/* int main() {
    char str[] = "Hello, World!";
    
    // Use my_memmove to shift part of the string within itself
    ft_memmove(str + 7, str + 5, 7); // Moves " World" over "o, W"
    
    printf("Result after my_memmove: %s\n", str); // Output: Hello, World!
    
    // Test overlapping regions
    char buffer[20] = "abcdef";
    ft_memmove(buffer + 2, buffer, 4); // Move "abcd" to start at buffer[2]

    printf("Buffer after my_memmove: %s\n", buffer); // Output: ababcd

    return 0;
} */
