/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 15:51:33 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/08/11 12:45:55 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	size_t		count;
	va_list		args;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && ft_strchr("cspduixX%", *(format + 1)))
			count += ft_printspecifier(args, *++format);
		else
			count += write(1, &(*format), 1);
		format++;
	}
	va_end(args);
	return (count);
}
