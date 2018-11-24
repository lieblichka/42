# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 15:15:48 by mwuckert          #+#    #+#              #
#    Updated: 2018/11/24 20:15:52 by mwuckert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

S = srcs/

I = .

SRC = $(S)ft_memset.c $(S)ft_putchar.c $(S)ft_putnbr.c $(S)ft_putstr.c $(S)ft_bzero.c $(S)ft_memcpy.c

SRC_T = tests/src_test/

TEST_FILES = $(SRC_T)ft_memset_test.c $(SRC_T)ft_bzero_test.c $(SRC_T)ft_memcpy_test.c

EXEC = tests/exec/test

all: $(NAME)

$(NAME):

test: compile_test
	./tests/exec/test

compile_test:
	gcc -Wall -Wextra -Werror $(SRC_T)main.c $(SRC_T)call_test.c $(TEST_FILES) $(SRC) -o $(EXEC) -I$(I)
