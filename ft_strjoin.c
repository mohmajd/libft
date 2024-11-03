/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:06:22 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/01 23:25:25 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static int ft_strlen(const char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
} */

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	int		i;
	char	*cnc;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	cnc = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (cnc == NULL)
		return (NULL);
	while (i < s1_len)
	{
		cnc[i] = s1[i];
		i++;
	}
	while ((i - s1_len) < s2_len)
	{
		cnc[i] = s2[i - s1_len];
		i++;
	}
	cnc[i] = '\0';
	return (cnc);
}
/*int main() {
    const char *s1 = "Hello, ";
    const char *s2 = "World!";

    char *p = ft_strjoin(s1, s2);

    if (p != NULL) {
        printf("Concatenated String: %s\n", p);
        free(p); // Free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
} */
