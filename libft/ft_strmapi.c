/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 13:22:13 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/07/28 16:19:05 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char	*neostr;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	neostr = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (neostr == NULL)
		return (NULL);
	while (s[i] != 0)
	{
		neostr[i] = f(i, s[i]);
		i++;
	}
	return (neostr);
}
