NAME = libfdf.a

SRC = ft_valid_map.c

OBJECT = ft_valid_map.o

INCLUDES =  libft/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@make -C $(INCLUDES) fclean && make -C $(INCLUDES)
	@gcc $(FLAGS) -c $(SRC) -I $(INCLUDES)
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