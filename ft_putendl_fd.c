#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
	int i ;

	if(!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(1,"\n",1);
}

int main()
{
	ft_putendl_fd("amjad how are u",1);
	return 0;
}