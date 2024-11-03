/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:24:27 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/10/25 22:24:29 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"

int	ft_isprint(int c)
{
	if (c < 127 && c > 31)
		return (1);
	else
		return (0);
}
