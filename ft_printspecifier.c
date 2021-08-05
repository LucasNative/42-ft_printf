/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printspecifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:44:23 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/08/04 16:02:53 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

size_t	ft_printspecifier(va_list args, char c)
{
	size_t	count;
	t_types	types;

	count = 0;
	if (c == 'd' || c == 'i')
		count = ft_printdigit(types.integer = va_arg(args, int));
	else if (c == 'u')
		count = ft_printunsigned(types.uninteger = va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		count = ft_printhexa(types.hexadecimal = va_arg(args, unsigned int), c);
	else if (c == 'c')
		count = ft_putchar(types.caracter = va_arg(args, int));
	else if (c == 'p')
		count = ft_printpointer(types.pointer = va_arg(args, size_t));
	else if (c == 's')
		count = ft_putstr(types.string = va_arg(args, char *));
	else if (c == '%')
		count = ft_putchar(c);
	return (count);
}
