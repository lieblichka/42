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
