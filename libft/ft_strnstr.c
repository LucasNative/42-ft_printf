/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 18:21:38 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/06/16 11:28:54 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	index;

	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *)haystack);
	index = 0;
	while (haystack[index] && needle_len <= len)
	{
		if (ft_strncmp(&haystack[index], needle, needle_len) == 0)
			return ((char *)&haystack[index]);
		index++;
		len--;
	}
	return (NULL);
}
