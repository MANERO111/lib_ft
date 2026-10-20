#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
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
}

// int main()
// {
// 	ft_putstr_fd("amjad how are u \n",1);
// 	return 0;
// }