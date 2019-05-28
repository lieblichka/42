#include "get_next_line.h"
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char    *line;
    int     fd;
    int     r;
	int		a = 0;

	if (argc != 2)
		return (-1);
    fd = open(*(argv + 1), O_RDONLY);
    while (a++ < 20)
    {
		r = get_next_line(fd, &line);
        ft_putnbr(r);
        ft_putchar('-');
		ft_putstr(line);
		if (r > 0)
			free(line);
		line = 0;
        ft_putchar('-');
        ft_putchar('\n');
    }
    return (0);
}
