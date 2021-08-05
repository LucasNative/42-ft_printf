/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:15:43 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/06/17 15:42:16 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest_cast;
	unsigned char	*src_cast;

	dest_cast = (unsigned char *)dst;
	src_cast = (unsigned char *)src;
	if (dest_cast < src_cast)
		return (ft_memcpy(dst, src, len));
	else
		while (len-- && dst != src)
			dest_cast[len] = src_cast[len];
	return (dst);
}
