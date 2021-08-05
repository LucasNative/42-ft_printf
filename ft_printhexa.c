/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 20:56:54 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/08/04 16:41:20 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

size_t	ft_printhexa(unsigned int hex, char c)
{
	char				*x;
	char				*hexa;
	size_t				index;
	unsigned int		hexalen;

	hexalen = ft_hexalen(hex);
	index = hexalen;
	x = "0123456789abcdef";
	if (c == 'X')
		x = "0123456789ABCDEF";
	hexa = ft_calloc(index, sizeof(char));
	if (!hexa)
		return (0);
	while (index)
	{
		hexa[--index] = x[hex % 16];
		hex = hex / 16;
	}
	write(1, hexa, hexalen);
	free(hexa);
	return (hexalen);
}
