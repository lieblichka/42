NAME = fdf

FLAGS = -Wall -Wextra -Werror 

F = -framework

FRAMEWORKS = $(F) OpenGL $(F) AppKit

HEADER_FDF = includes/

HEADER_LFDF = libfdf/

HEADER_LFT = $(HEADER_LFDF)libft/

S = srcs/

SRCS = $(S)main.c $(S)fdf.c

SRCO = main.o fdf.o

LMLX = $(HEADER_LFDF)libmlx

all: $(NAME)

$(NAME):
	make -C $(HEADER_LFDF) fclean && make -C $(HEADER_LFDF)
	gcc -c $(FLAGS) $(SRCS) -I $(HEADER_FDF) -I $(HEADER_LFDF) -I $(HEADER_LFT)
	gcc -o $(NAME) $(SRCO) -L $(HEADER_LFDF) -lfdf -L $(LMLX) -lmlx \
	-L $(HEADER_LFT) -lft  $(FRAMEWORKS)
clean:
	make -C $(HEADER_LFDF) fclean
	make -C $(HEADER_LFT) fclean
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
