# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 15:15:48 by mwuckert          #+#    #+#              #
#    Updated: 2018/11/28 22:22:00 by mwuckert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

S = ./

I = ./

SRC = $(S)ft_atoi.c $(S)ft_bzero.c $(S)ft_isalnum.c $(S)ft_isalpha.c $(S)ft_isascii.c $(S)ft_isdigit.c $(S)ft_isprint.c $(S)ft_memccpy.c $(S)ft_memchr.c $(S)ft_memcmp.c $(S)ft_memcpy.c $(S)ft_memmove.c $(S)ft_memset.c $(S)ft_putchar.c $(S)ft_putnbr.c $(S)ft_putstr.c $(S)ft_strcat.c $(S)ft_strchr.c $(S)ft_strcmp.c $(S)ft_strcpy.c $(S)ft_strdup.c $(S)ft_strlcat.c $(S)ft_strlen.c $(S)ft_strncat.c $(S)ft_strncmp.c $(S)ft_strncpy.c $(S)ft_strnstr.c $(S)ft_strrchr.c $(S)ft_strstr.c $(S)ft_tolower.c $(S)ft_toupper.c $(S)ft_memalloc.c $(S)ft_memdel.c $(S)ft_strnew.c $(S)ft_strdel.c $(S)ft_strclr.c $(S)ft_striter.c $(S)ft_striteri.c $(S)ft_strmap.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -I$(I)
	ar rc libft.a *.o

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re: fclean all
