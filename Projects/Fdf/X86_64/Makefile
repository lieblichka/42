NAME = fdf

FLAGS = -Wall -Wextra -Werror

S = srcs/

SRCS = $(S)main.c

PATH_USR_LIB = /usr/lib/

ADDITION_LIB = -L $(PATH_MLX) -lmlx_x86_64 -L $(PATH_USR_LIB) -lX11 -lXext

MLX_H = $(PATH_MLX)

FDF_H = $(PATH_FDF) 

HEADERS = -I $(FDF_H) -I $(MLX_H)

$(NAME):
	gcc -o $(NAME) $(FLAGS) $(SRCS) $(ADDITION_LIB) $(HEADERS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: re all
