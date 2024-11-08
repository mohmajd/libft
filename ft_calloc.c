/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:23:34 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/08 22:14:05 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*p;
	size_t			i;

	i = count * size;
	if (count == 0 || size == 0)
		return (malloc(0));
	if (i / count != size || i / size != count)
		return (NULL);
	p = malloc(i);
	if (!p)
		return (NULL);
	ft_bzero(p, i);
	return (p);
}
