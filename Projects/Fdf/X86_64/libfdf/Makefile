NAME = libfdf.a

SRC =	ft_valid_map.c ft_create_mlx.c ft_create_mlx_map.c \
		ft_del_mlx.c ft_del_mlx_map.c ft_fill_mlx_map.c \
		ft_run_mlx_window.c ft_put_mlx_point.c ft_put_mlx_line.c \
		ft_put_mlx_map.c ft_show_mlx_coordinate.c ft_initialize_params.c \
		ft_show_coordinate.c ft_mlx_hooks.c ft_mlx_hook_keys.c \
		ft_mlx_hook_mouse.c ft_create_mlxbox.c ft_close_fdf.c \
		ft_mlx_issue_mouse.c ft_mlx_move_mouse.c ft_put_mlx_vertical.c \
		ft_put_mlx_horisontal.c ft_mlx_rotate_all.c ft_mlx_rotate_x.c \
		ft_mlx_rotate_y.c ft_mlx_rotate_z.c ft_del_mlx_box.c \
		ft_put_mlx_active_man.c

OBJECT =	ft_valid_map.o ft_create_mlx.o ft_create_mlx_map.o \
			ft_del_mlx.o ft_del_mlx_map.o ft_fill_mlx_map.o \
			ft_run_mlx_window.o ft_put_mlx_point.o ft_put_mlx_line.o \
			ft_put_mlx_map.o ft_show_mlx_coordinate.o ft_initialize_params.o \
			ft_show_coordinate.o ft_mlx_hooks.o ft_mlx_hook_keys.o \
			ft_mlx_hook_mouse.o ft_create_mlxbox.o ft_close_fdf.o \
			ft_mlx_issue_mouse.o ft_mlx_move_mouse.o ft_put_mlx_vertical.o \
		   	ft_put_mlx_horisontal.o ft_mlx_rotate_all.o ft_mlx_rotate_x.o \
			ft_mlx_rotate_y.o ft_mlx_rotate_z.o ft_del_mlx_box.o \
			ft_put_mlx_active_man.o

INCLUDES =  libft/

FLAGS = -Wall -Wextra -Werror

MLX_H = libmlx/

LLDB = -g -O0

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I $(INCLUDES) -I $(MLX_H) 
	ar -r -c -s $(NAME) $(OBJECT)

norm:
	norminette ft_*.c
	norminette *.h

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
