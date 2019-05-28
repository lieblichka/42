#include "libft.h"

void	ft_twodarraydel(void **twod_array)
{
	if (twod_array)
	{
		ft_delelemofarray(twod_array);
		ft_memdel((void**)&twod_array);
	}
}
