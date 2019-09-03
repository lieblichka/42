NAME = ft_printf

FULL_NAME = $(addprefix $(LFTPRINTF),libftprintf.a)

SRCS = main.c 

OBJECTS = main.o

FLAGS = -Wall -Wextra -Werror

LFTPRINTF = ../

LFT = ../libft/

all: $(NAME)

$(NAME): $(FULL_NAME) $(OBJECTS)
	gcc $(FLAGS) -o $(NAME) $(OBJECTS) -L $(LFTPRINTF) -lftprintf
	./ft_printf

$(FULL_NAME):
	make -C $(LFTPRINTF)

$(OBJECTS): $(SRCS)
	gcc -c $(SRCS) -I $(LFTPRINTF) -I $(LFT)

clean:
	rm -f $(OBJECTS)
	make -C $(LFTPRINTF) fclean
fclean: clean
	rm -f $(NAME)
re: fclean all
