NAME = libftprintf.a 

SRCS = $(wildcard *.c)

SRCS += $(wildcard $(INCLUDES_LFT)*.c)

SRCS += $(wildcard $(INCLUDES_LFTFLOAT)*.c)

OBJECTS = $(SRCS:.c=.o)

INCLUDES_LFT = libft/

INCLUDES_LFTFLOAT = float/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -r -c -s $(NAME) $(OBJECTS)

$(OBJECTS): %.o: %.c $(NAME:.a=.h)
	gcc $(FLAGS) -c $< -I $(INCLUDES_LFT) -I $(INCLUDES_LFTFLOAT) -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
