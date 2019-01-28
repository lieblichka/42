# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 15:15:48 by mwuckert          #+#    #+#              #
#    Updated: 2019/01/23 12:18:27 by mwuckert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfdf.a

SRC =

OBJECT =

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	ar -r -c -s  $(NAME) $(OBJECT)

norm:
	norminette ft_*.c
	norminette *.h
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
