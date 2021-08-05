/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 20:52:58 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/06/24 20:59:36 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*casted_dst;
	unsigned char	*casted_src;

	if ((!dst && !src))
		return (NULL);
	casted_dst = (unsigned char *)dst;
	casted_src = (unsigned char *)src;
	index = 0;
	while (index < n)
	{
		casted_dst[index] = casted_src[index];
		index++;
	}
	return (casted_dst);
}
