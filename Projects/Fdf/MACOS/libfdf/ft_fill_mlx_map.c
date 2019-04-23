#include "libfdf.h"

static void	ft_fill_mlx(t_mlx *mlx, char **line, int i)
{
	int j;
	
	j = -1;
	while (*(line + ++j))
		ft_atoi
}

int			ft_fill_mlx_map(t_mlx **mlx_map, char **map)
{
	int	i;
	char **line;

	i = -1;
	while (*(map + ++i))
	{
		if (!(line = ft_strsplit(*(map + i), ' ')))
			return (0);
		ft_fill_mlx(mlx_map + i, map + i, i);
	}
	return (1);
}
