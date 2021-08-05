/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:36:37 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/08/04 16:03:30 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

size_t	ft_printpointer(size_t hex)
{
	char		*x;
	char		*hexa;
	int			index;
	size_t		hexalen;

	hexalen = ft_hexalen(hex);
	index = hexalen;
	x = "0123456789abcdef";
	hexa = malloc((index * sizeof(char)) + 2);
	if (!hexa)
		return (0);
	hexa[0] = '0';
	hexa[1] = 'x';
	while (index)
	{
		hexa[--index + 2] = x[hex % 16];
		hex = hex / 16;
	}
	write(1, hexa, hexalen + 2);
	free(hexa);
	return (hexalen + 2);
}
