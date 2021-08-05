/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:03:10 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/06/16 12:37:25 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_cast;
	unsigned char	*s2_cast;
	size_t			count;

	if ((!s1 && !s2) || n == 0)
		return (0);
	s1_cast = (unsigned char *)s1;
	s2_cast = (unsigned char *)s2;
	count = 0;
	while (count < n)
	{
		if (*s1_cast != *s2_cast)
			return (*s1_cast - *s2_cast);
		count++;
		s1_cast++;
		s2_cast++;
	}
	return (0);
}
