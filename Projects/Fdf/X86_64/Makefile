NAME = fdf

FLAGS = -Wall -Wextra -Werror

S = srcs/

SRCS = $(S)main.c $(S)fdf.c

SRCO = main.o fdf.o

LFT = libfdf/libft/

LFDF = libfdf/

FDF_H = includes/ 

MLX_HEADER = libfdf/libmlx/

all: $(NAME)

$(NAME):
	@make -C $(LFDF) fclean && make -C $(LFDF)
	@gcc $(FLAGS) -c $(SRCS) -I $(LFDF) -I $(LFT) -I $(FDF_H) -I $(MLX_HEADER)
	@gcc -o $(NAME) $(SRCO) -L $(LFDF) -lfdf -L $(LFT) -lft 
	 
clean:
	@rm -f *.o
	@make -C $(LFDF) fclean

fclean: clean
	@rm -f $(NAME)

re: fclean all
