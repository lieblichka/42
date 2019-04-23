#include "libfdf.h"

void	ft_del_mlx_map(t_mlx **mlx_map)
{
	if (mlx_map && *mlx_map)
	{
		if (*(mlx_map + 1))
			ft_del_mlx_map(mlx_map + 1);
		ft_del_mlx(mlx_map);
	}
}
