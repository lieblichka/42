NAME = libfdf.a

SRC =	ft_valid_map.c ft_create_mlx.c ft_create_mlx_map.c \
		ft_del_mlx.c ft_del_mlx_map.c

OBJECT =	ft_valid_map.o ft_create_mlx.o ft_create_mlx_map.o \
			ft_del_mlx.o ft_del_mlx_map.o

INCLUDES =  libft/

FLAGS = -Wall -Wextra -Werror

MLX_HEADER = libmlx/

all: $(NAME)

$(NAME):
	@make -C $(INCLUDES) fclean && make -C $(INCLUDES)
	@gcc $(FLAGS) -c $(SRC) -I $(INCLUDES) -I $(MLX_HEADER)
	@ar -r -c -s $(NAME) $(OBJECT)

norm:
	norminette ft_*.c
	norminette *.h

clean:
	@rm -f *.o
	@make -C $(INCLUDES) fclean

fclean: clean
	@rm -f $(NAME)

re: fclean all
