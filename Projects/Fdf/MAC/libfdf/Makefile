# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 15:15:48 by mwuckert          #+#    #+#              #
#    Updated: 2019/01/28 21:53:35 by mwuckert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfdf.a

SRC = ft_create_window.c

OBJECT = ft_create_window.o

FLAGS = -Wall -Wextra -Werror

MLX_H = $(PATH_MLX)mlx.h

LFT_H = $(PATH_LFT)libft.h

PATH_MLX = libmlx/

PATH_LFT = libft/

all: $(NAME)

$(NAME):
	make -C $(PATH_MLX) clean && make -C $(PATH_MLX) 
	make -C $(PATH_LFT) clean && make -C $(PATH_LFT) 
	gcc $(FLAGS) -c $(SRC) -I $(MLX_H) -I $(LFT_H)
	ar -r -c -s  $(NAME) $(OBJECT)

norm:
	norminette ft_*.c
	norminette *.h

clean:
	make -C $(PATH_MLX) clean
	make -C $(PATH_LFT) clean
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
