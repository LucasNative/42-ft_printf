/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 16:00:06 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/06/17 16:31:13 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cast;
	int				i;

	i = 0;
	s_cast = (unsigned char *)s;
	while (n--)
	{
		if (s_cast[i] == (unsigned char)c)
			return (s_cast + i);
		i++;
	}
	return (NULL);
}
