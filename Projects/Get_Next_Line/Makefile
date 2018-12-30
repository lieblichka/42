# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/26 13:17:28 by mwuckert          #+#    #+#              #
#    Updated: 2018/12/30 15:40:17 by mwuckert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line

SRC = src/test.c

SRC_LIB = lib

HEADER_LIB = include/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -L$(SRC_LIB) -lft $(SRC) -I$(HEADER_LIB) -o exec/$(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f exec/$(NAME)

re: fclean all
