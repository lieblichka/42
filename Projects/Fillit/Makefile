NAME = fillit

FLAGS = -Wall -Wextra -Werror

S = srcs/

SRCS = $(S)main.c $(S)fillit.c

SRCO = main.o fillit.o

LFT = libfillit/libft/

LFILLIT = libfillit/

FILL_H = includes/

all: $(NAME)

$(NAME):
	make -C $(LFILLIT) fclean && make -C $(LFILLIT)
	gcc -c $(FLAGS) $(SRCS) -I $(LFILLIT) -I $(LFT) -I $(FILL_H)
	gcc -o $(NAME) $(SRCO) -L $(LFILLIT) -lfillit -L $(LFT) -lft

clean:
	rm -f *.o
	make -C $(LFILLIT) fclean

fclean: clean
	rm -f $(NAME)

re: fclean all
