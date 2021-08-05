/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 21:08:27 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/06/24 19:52:05 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_len(int i)
{
	size_t	len;

	len = 0;
	if (i == 0)
		return (1);
	while (i != 0)
	{
		len++;
		i = i / 10;
	}
	return (len);
}

static char	*negative(size_t n)
{
	char	*negative_str;
	size_t	size;

	size = int_len(n);
	negative_str = ft_calloc((size + 2), sizeof(char));
	if (negative_str == NULL)
		return (NULL);
	negative_str[0] = '-';
	n = n * -1;
	while (n != 0)
	{
		negative_str[--size + 1] = (n % 10) + '0';
		n = n / 10;
	}
	return (negative_str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;

	size = int_len(n);
	if (n < 0)
	{
		return (negative(n));
	}
	str = ft_calloc(size + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[--size] = (n % 10) + '0';
	while (n != 0)
	{
		str[--size] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
