# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 15:15:48 by mwuckert          #+#    #+#              #
#    Updated: 2019/01/21 15:12:40 by dtreutel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfillit.a

SRC =	ft_valid_file.c ft_change_figure_position.c \
		ft_valid_figure.c ft_convert_str.c ft_count_square.c \
		ft_create_finish_map.c ft_figure_color.c ft_figure_next_step.c \
		ft_check_cross.c ft_build_square.c ft_figure_move_up.c \
		ft_figure_move_left.c ft_figure_move_start.c ft_puts_figure.c \
		ft_whose_house.c ft_clear_house.c ft_increase_square.c

OBJECT =	ft_valid_file.o ft_change_figure_position.o \
			ft_valid_figure.o ft_convert_str.o ft_count_square.o \
			ft_create_finish_map.o ft_figure_color.o ft_figure_next_step.o \
			ft_check_cross.o ft_build_square.o ft_figure_move_up.o \
			ft_figure_move_left.o ft_figure_move_start.o ft_puts_figure.o \
			ft_whose_house.o ft_clear_house.o ft_increase_square.o

INCLUDES  = libft/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)


$(NAME):
	make -C $(INCLUDES) fclean && make -C $(INCLUDES)
	gcc $(FLAGS) -c $(SRC) -I $(INCLUDES)
	ar -r -c -s  $(NAME) $(OBJECT)

norm:
	norminette ft_*.c
	norminette *.h
clean:
	rm -f *.o
	make -C $(INCLUDES) fclean

fclean: clean
	rm -f $(NAME)

re: fclean all
