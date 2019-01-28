#include "mlx.h"

int	main(void)
{
	void *mlx;
	mlx = mlx_init();
	mlx_new_window(mlx, 3, 4, "Hello");
	return (0);
}
