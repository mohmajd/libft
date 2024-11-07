/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:23:34 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/07 17:02:06 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*p;
	size_t			i;

	i = count * size;
	if (i / count != size || i / size != count)
		return (NULL);
	p = malloc(i);
	if (!p)
		return (NULL);
	ft_bzero(p, i);
	return (p);
}
