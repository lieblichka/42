#include "libfdf.h"

void	ft_del_mlx(t_mlx **amlx)
{
	if (amlx && *amlx)
	{
		if ((**amlx).next)
			ft_del_mlx((t_mlx**)&(**amlx).next);
		ft_memdel((void**)&(**amlx).point);
		ft_memdel((void**)amlx);
	}
}
