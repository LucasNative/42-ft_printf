/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 12:14:51 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/08/04 16:03:06 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printdigit(int i)
{
	unsigned int	num;
	int				ret;

	ret = 0;
	if (i < 0)
	{
		ft_putchar('-');
		num = (unsigned int)i * -1;
		ret++;
	}
	else
		num = (unsigned int)i;
	if (num >= 10)
		ft_printdigit(num / 10);
	ft_putchar((char)(num % 10) + 48);
	return (ft_intlen(i) + ret);
}
