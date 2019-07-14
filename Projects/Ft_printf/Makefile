NAME = libftprintf.a 

SRCS = $(wildcard *.c)

SRCS += $(wildcard $(INCLUDES)*.c)

OBJECTS = $(SRCS:.c=.o)

INCLUDES = libft/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -r -c -s $(NAME) $(OBJECTS)

$(OBJECTS): %.o: %.c $(NAME:.a=.h)
	gcc $(FLAGS) -c $< -I $(INCLUDES) -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
