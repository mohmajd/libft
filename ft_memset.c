/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 00:04:18 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/02 00:06:13 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	char			*p;
	unsigned int	i;

	i = 0;
	p = (char *) ptr;
	while (i < num)
	{
		p[i] = value;
		i++;
	}
	p[i] = '\0';
	return (ptr);
}
