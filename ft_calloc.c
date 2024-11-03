/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:23:34 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/10/25 22:23:36 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void			*p;
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	p = malloc(num_elements * element_size);
	if (p == NULL)
		return (NULL);
	ptr = (unsigned char *)p;
	while (i < num_elements)
	{
		ptr[i] = 0;
		i++;
	}
	return (p);
}
