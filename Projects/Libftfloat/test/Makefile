NAME = float

INCLUDES = ../

SRCS = main.c

OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	make -C ../
	gcc -o $(NAME) $(OBJECTS) -L $(INCLUDES) -lftfloat
$(OBJECTS): $(SRCS)
	gcc -c $(SRCS)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
