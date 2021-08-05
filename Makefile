# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/16 15:51:37 by ldaniel-          #+#    #+#              #
#    Updated: 2021/08/03 17:55:02 by ldaniel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC		= gcc

BIN		= ${FILES:%.c=%.o}

CFLAGS	= -Wall -Wextra -Werror

FILES	= ft_printf.c ft_printhexa.c ft_printdigit.c ft_printspecifier.c ft_printpointer.c ft_printunsigned.c \

all: ${NAME}

${NAME} : ${BIN} libft
	cp ./libft/libft.a $(NAME)
	ar -rcs $(NAME) $(BIN)

%.o: %.c
	${CC} -c ${CFLAGS} $< -o $@

libft:
	make all -C ./libft

clean: libclean
	rm -f ${BIN}

fclean: clean libfclean
	rm -f ${NAME}

libclean:
	make clean -C ./libft

libfclean:
	make fclean -C ./libft

re: fclean all libftre

libftre:
	make re -C ./libft

.PHONY: all libft clean fclean libclean libfclean re libftre
