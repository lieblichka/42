# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wmaykit <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/26 09:22:22 by wmaykit           #+#    #+#              #
#    Updated: 2019/09/01 20:17:34 by wmaykit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftfloat.a

NAME_LFT = $(INCLUDES)libft.a

SRCS =	ft_create_treal.c ft_create_tieee754.c \
		ft_addition_num.c ft_conversion_powers.c ft_normalize_num.c \
		ft_parse_float.c ft_parse_double.c ft_parse_power_mantis.c  \
		ft_parse_ldouble.c ft_parse_parts_ieee754.c \
		ft_print_tparts.c ft_print_tpowers.c \
		ft_delete_treal.c ft_delete_tieee754.c \
		ft_get_real_number.c ft_get_integer_part.c ft_get_frac_part.c \
		ft_move_digit.c


SRCS += $(wildcard $(INCLUDES)*.c)

OBJECTS = $(SRCS:.c=.o)

INCLUDES = libft/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -r -c -s $(NAME) $(OBJECTS) 

$(OBJECTS): %.o : %.c $(NAME:.a=.h) 
	gcc $(FLAGS) -c $< -I $(INCLUDES) -o $@
	
norm:
	norminette $(SRCS) $(NAME:.a=.h) 
	
clean:
	rm -f $(OBJECTS)
	
fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_LFT)

re: fclean all

.PHONY: all clean fclean re norm
