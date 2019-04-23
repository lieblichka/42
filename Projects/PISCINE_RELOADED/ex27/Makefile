# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/01 23:25:52 by mwuckert          #+#    #+#              #
#    Updated: 2018/12/10 16:42:24 by mwuckert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = srcs/

SRCC = $(SRC)ft_read.c $(SRC)ft_putstr.c $(SRC)ft_putchar.c $(SRC)ft_strlen.c

HEADER = includes/

all: $(NAME)


$(NAME):
	gcc -I$(HEADER) -o $(NAME) -Wall -Wextra -Werror main.c $(SRCC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
