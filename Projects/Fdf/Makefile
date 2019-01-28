NAME = fdf

FLAGS = -Wall -Wextra -Werror

S = srcs/

SRCS = $(S)main.c

PATH_MLX = minilibx/

PATH_USR_LIB = /usr/lib/

ADDITION_LIB = -L $(PATH_MLX) -lmlx_x86_64 -L $(PATH_USR_LIB) -lX11 -lXext

HEADER = $(PATH_MLX)

$(NAME):
	gcc -o $(NAME) $(FLAGS) $(SRCS) $(ADDITION_LIB) -I $(HEADER)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: re all
