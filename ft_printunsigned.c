/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:45:56 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/08/04 16:03:37 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

static size_t	ft_unsignedtlen(size_t n)
{
	size_t	c;

	c = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

size_t	ft_printunsigned(unsigned int i)
{
	unsigned int	num;

	num = (unsigned int)i;
	if (num >= 10)
		ft_printunsigned(num / 10);
	ft_putchar((char)(num % 10) + 48);
	return (ft_unsignedtlen(i));
}
