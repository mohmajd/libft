/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:38:35 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/12 02:39:11 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	k;
	int	count;

	i = 0;
	k = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && k == 0)
		{
			k = 1;
			count++;
		}
		else if (s[i] == c)
			k = 0;
		i++;
	}
	return (count);
}

static int	ft_nextdelimiter(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

static char	*ft_strndup(const char *s, size_t n)
{
	size_t		i;
	char		*dest;

	i = 0;
	dest = malloc(sizeof(char) * (n + 1));
	if (dest == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = s[i];
		i++;
	}
	dest[n] = '\0';
	return (dest);
}

static void	ft_fill(char **result, char const *p, char c)
{
	int	i;
	int	n;

	i = 0;
	while (*p)
	{
		while (*p == c)
			p++;
		n = ft_nextdelimiter(p, c);
		if (n > 0)
		{
			result[i] = ft_strndup(p, n);
			if (!result[i])
			{
				while (i > 0)
					free(result[--i]);
				free(result);
				return ;
			}
			i++;
		}
		p += n;
	}
	result[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	ft_fill(result, s, c);
	return (result);
}
