/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 00:04:18 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/05 17:07:21 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t num)
{
	char			*p;
	unsigned int	i;

	i = 0;
	p = (char *) b;
	while (i < num)
	{
		p[i] = (char)c;
		i++;
	}
	return (b);
}