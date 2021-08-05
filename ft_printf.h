/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 15:30:50 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/08/04 16:04:07 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>
typedef struct s_types
{
	int				caracter;
	int				integer;
	char			*string;
	size_t			pointer;
	unsigned int	hexadecimal;
	unsigned int	uninteger;
}	t_types;

int			ft_printdigit(int i);
int			ft_printf(const char *format, ...);
size_t		ft_printpointer(size_t	hex);
size_t		ft_printunsigned(unsigned int i);
size_t		ft_printhexa(unsigned int hex, char c);
size_t		ft_printspecifier(va_list args, char c);
#endif
