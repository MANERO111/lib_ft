#include <stdlib.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i ;
	char	*ptr;

	if (!s || !f)
		return (NULL);
	ptr = malloc(ft_strlen(s) + 1);
	if(!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// #include <stdio.h>
// int main()
// {
	
// 	char *ptr = ft_strmapi("amjad how are u",&make_upper);
// 	printf("%s\n",ptr);
// 	free(ptr);
// }