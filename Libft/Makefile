# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 15:15:48 by mwuckert          #+#    #+#              #
#    Updated: 2018/11/27 20:29:55 by mwuckert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

S = ./

I = ./

SRC = $(S)ft_atoi.c $(S)ft_bzero.c $(S)ft_isalnum.c $(S)ft_isalpha.c $(S)ft_isascii.c $(S)ft_isdigit.c $(S)ft_isprint.c $(S)ft_memccpy.c $(S)ft_memchr.c $(S)ft_memcmp.c $(S)ft_memcpy.c $(S)ft_memmove.c $(S)ft_memset.c $(S)ft_putchar.c $(S)ft_putnbr.c $(S)ft_putstr.c $(S)ft_strcat.c $(S)ft_strchr.c $(S)ft_strcmp.c $(S)ft_strcpy.c $(S)ft_strdup.c $(S)ft_strlcat.c $(S)ft_strlen.c $(S)ft_strncat.c $(S)ft_strncmp.c $(S)ft_strncpy.c $(S)ft_strnstr.c $(S)ft_strrchr.c $(S)ft_strstr.c $(S)ft_tolower.c $(S)ft_toupper.c

all: $(NAME)

$(NAME): create_o
	ar rc libft.a *.o

create_o:
	gcc -Wall -Wextra -Werror -c $(SRC) -I$(I)

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re: fclean all
