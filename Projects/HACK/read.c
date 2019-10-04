#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int fd;
	int i;
	int j;
	unsigned char a[1000000];
	int pos;

	fd = open("./a.out", O_RDONLY);
	pos = read(fd, a, 1000000);
	i = 0;
	while (i < pos)
	{
		j = 7;
		/*while (j >= 0)
		{
			write(1, (a[i] << j-- & 128 ? "1" : "0"), 1);
		}*/
		printf("%02x ", a[i]);
		//write(1, " ", 1);
		++i;
		if (!(i % 20))
			printf("\n");
	}
	return (0);
}
