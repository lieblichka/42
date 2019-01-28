#include "mlx.h"
#include "fdf.h"

int		main(void)
{
	void	*mlx;
	void	*win;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 1000, 700, "Hello");
	move_diagonal(mlx, win);
	mlx_loop(mlx);
	return (0);
}
