NAME = fdf

FLAGS = -Wall -Wextra -Werror

S = srcs/

SRCS = $(S)main.c $(S)fdf.c

SRCO = main.o fdf.o

LFT = libfdf/libft/

LFDF = libfdf/

FDF_H = includes/ 

MLX_H = $(LFDF)libmlx/

MINLIB_X = -L $(MLX_H) -lmlx_x86_64

XLIB = -L /usr/lib/ -lX11 -L /usr/lib/ -lXext

LLDB = -g -O0

all: $(NAME)

$(NAME):
	make -C $(LFT) fclean && make -C $(LFT)
	make -C $(LFDF) fclean && make -C $(LFDF)
	gcc $(FLAGS) -c $(SRCS) -I $(LFDF) -I $(LFT) -I $(FDF_H) -I $(MLX_H)
	gcc -lm -o $(NAME) $(SRCO) -L $(LFDF) -lfdf -L $(LFT) -lft $(XLIB) $(MINLIB_X)

clean:
	rm -f *.o
	make -C $(LFDF) fclean
	make -C $(LFT) fclean

fclean: clean
	rm -f $(NAME)

re: fclean all
