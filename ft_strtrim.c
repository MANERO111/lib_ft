#include <stdlib.h>
#include "libft.h"

int isthere(const char *s , char c)
{
	size_t i;
	
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *ptr;
	size_t first;
	size_t last;
	size_t k;

	first = 0;
	k = 0;
	if(!s1 || !set)
		return (NULL);
	while (s1[first] && isthere(set,s1[first]))
		first++;
	last = ft_strlen(s1);
	while (last > first && isthere(set,s1[last - 1]))
		last--;
	ptr = malloc((last - first) + 1);
	if (!ptr)
		return (NULL);
	while (first < last)
		ptr[k++] = s1[first++];
	ptr[k] = '\0';
	return (ptr);
}
