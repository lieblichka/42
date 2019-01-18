# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 15:15:48 by mwuckert          #+#    #+#              #
#    Updated: 2019/01/18 01:36:11 by dtreutel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfillit.a

SRC =	ft_valid_file.c ft_change_figure_position.c \
		ft_valid_figure.c ft_convert_str.c ft_count_square.c \
		ft_create_finish_map.c ft_figure_color.c ft_figure_next_step.c

OBJECT =	ft_valid_file.o ft_change_figure_position.o \
			ft_valid_figure.o ft_convert_str.o ft_count_square.o \
			ft_create_finish_map.o ft_figure_color.o ft_figure_next_step.o

INCLUDES  = libft/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)


$(NAME):
	make -C $(INCLUDES) fclean && make -C $(INCLUDES)
	gcc $(FLAGS) -c $(SRC) -I $(INCLUDES)
	ar -r -c -s  $(NAME) $(OBJECT)

clean:
	rm -f *.o
	make -C $(INCLUDES) fclean

fclean: clean
	rm -f $(NAME)

re: fclean all
