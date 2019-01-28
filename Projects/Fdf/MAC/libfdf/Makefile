# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 15:15:48 by mwuckert          #+#    #+#              #
#    Updated: 2019/01/28 19:23:21 by mwuckert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfdf.a

SRC = ft_create_window.c

OBJECT = ft_create_window.o

FLAGS = -Wall -Wextra -Werror

MLX_H = $(PATH_MLX)mlx.h

PATH_MLX = libmlx/

all: $(NAME)

$(NAME):
	make -C $(PATH_MLX) clean && make $(PATH_MLX) 
	gcc $(FLAGS) -c $(SRC) -I $(MLX_H)
	ar -r -c -s  $(NAME) $(OBJECT)

norm:
	norminette ft_*.c
	norminette *.h

clean:
	make -C $(PATH_MLX) clean
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
