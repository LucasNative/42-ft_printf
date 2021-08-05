# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/02 16:56:51 by ldaniel-          #+#    #+#              #
#    Updated: 2021/07/30 16:45:17 by ldaniel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= libft.a

CC		= gcc -c

BIN		= ${FILES:%.c=%.o}

CFLAGS	= -Wall -Wextra -Werror

FILES	= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c \
		ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_memset.c \
		ft_strnstr.c ft_strchr.c ft_strrchr.c ft_strlcat.c ft_memcmp.c ft_memccpy.c \
		ft_memmove.c ft_bzero.c ft_memchr.c ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_putnbr_fd.c ft_strmapi.c ft_puts.c ft_intlen.c ft_strclen.c \
		ft_putchar.c ft_putstr.c ft_hexalen.c\

all: ${NAME}

${NAME} : ${BIN}
	ar -rcs $(NAME) $(BIN)

%.o: %.c
	${CC} ${CFLAGS} $< -o $@

clean:
	rm -f ${BIN}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
