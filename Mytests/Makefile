NAME = get_next_line

SRC_GNL = ~/Desktop/42/Projects/Get_Next_Line/

SRC_GNL_M = ~/Desktop/42/Projects/GNL_Multi_Fd/

SRCS = $(SRC_GNL)get_next_line.c

SRCO = get_next_line.o main.o

MAIN = main.c

LFT_DIR = $(SRC_GNL)libft

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	make -C $(SRC_GNL_M)libft fclean
	make -C $(SRC_GNL_M)libft
	gcc $(FLAGS) -c $(SRCS) 
	gcc 	$(FLAGS) -c $(MAIN) -I $(SRC_GNL_M)
	gcc -o $(NAME) $(FLAGS) $(SRCO) -I $(LFT_DIR) -L $(LFT_DIR) -lft

fclean_dir_gnl:
	make -C $(SRC_GNL)libft fclean

fclean: clean
	rm -f $(NAME)
clean:
	rm -f *.o

re: fclean all
