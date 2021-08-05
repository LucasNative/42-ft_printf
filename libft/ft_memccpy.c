/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:06:12 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/06/17 15:41:52 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_cast;
	unsigned char	*src_cast;

	dst_cast = (unsigned char *)dst;
	src_cast = (unsigned char *)src;
	while (n--)
	{
		*dst_cast = *src_cast;
		if (*dst_cast == (unsigned char)c)
			return (dst_cast + 1);
		dst_cast++;
		src_cast++;
	}
	return (NULL);
}
