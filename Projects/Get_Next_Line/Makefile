# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/26 13:17:28 by mwuckert          #+#    #+#              #
#    Updated: 2019/01/05 13:13:30 by mwuckert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line

SRC = src/test.c

SRCO = src/test.o

SRC_LIB = lib

HEADER_LIB = include/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I$(HEADER_LIB) -o $(SRCO)
	gcc $(FLAGS) $(SRCO) -L$(SRC_LIB) -lft -o exec/$(NAME)

clean:
	rm -f *.o
	rm -f $(SRCO)

fclean: clean
	rm -f exec/$(NAME)

re: fclean all
