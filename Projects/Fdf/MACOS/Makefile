NAME = fdf

FLAGS = -Wall -Wextra -Werror

S = srcs/

SRCS = $(S)main.c $(S)fdf.c

SRCO = main.o fdf.o

LFT = libfdf/libft/

LFDF = libfdf/

FDF_H = includes/ 

MLX_H = $(LFDF)libmlx/

FRAME = -framework OpenGL -framework AppKit

MINLIB_X = -L $(MLX_H) -lmlx $(FRAME)

LLDB = -g -O0

all: $(NAME)

$(NAME):
	make -C $(LFT) fclean && make -C $(LFT)
	make -C $(LFDF) fclean && make -C $(LFDF)
	make -C $(MLX_H) clean && make -C $(MLX_H)
	gcc $(FLAGS) -c $(SRCS) -I $(LFDF) -I $(LFT) -I $(FDF_H) -I $(MLX_H)
	gcc -o $(NAME) $(SRCO) -L $(LFDF) -lfdf -L $(LFT) -lft $(MINLIB_X) 

clean:
	rm -f *.o
	make -C $(LFDF) fclean
	make -C $(LFT) fclean
	make -C $(MLX_H) clean

fclean: clean
	rm -f $(NAME)

re: fclean all
