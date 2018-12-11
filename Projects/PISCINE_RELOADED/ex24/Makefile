# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/21 14:04:10 by mwuckert          #+#    #+#              #
#    Updated: 2018/11/21 16:45:55 by mwuckert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

S = srcs/

SOURCE = $(S)ft_putchar.c $(S)ft_putstr.c $(S)ft_strcmp.c $(S)ft_strlen.c $(S)ft_swap.c

O_FILE = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INCLUDE = includes/

all: $(NAME) create_libft

create_libft:
	ar rc $(NAME) $(O_FILE)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SOURCE) -I$(INCLUDE)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
