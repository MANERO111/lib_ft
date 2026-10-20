#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
	long nb = n;
	char c ;

	if (nb < 0)
	{
		write(fd,"-",1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		c = nb % 10 + '0';
		write(fd, &c, 1);
	}
	else
	{
		c = nb + '0';
		write(fd, &c, 1);
	}
}
