#include "mlx.h"

int	main(void)
{
	void *mlx;
	mlx = mlx_init();
	mlx_new_window(mlx, 1000, 1000, "Hello");
	mlx_loop(mlx);
	return (0);
}
