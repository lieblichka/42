NAME = float

INCLUDES = ../

INCLUDES_LFT = ../libft/

SRCS = main.c

OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	make -C ../
	make -C ../libft/
	gcc -o $(NAME) $(OBJECTS) -L $(INCLUDES) -lftfloat -L $(INCLUDES_LFT) -lft
$(OBJECTS): $(SRCS)
	gcc -c $(SRCS) -I $(INCLUDES) -I $(INCLUDES_LFT)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
