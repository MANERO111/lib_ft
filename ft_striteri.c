
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>

// int main()
// {
// 	char s[] = "amjad how are u";
// 	ft_striteri(s,&make_upper);
// 	printf("%s\n",s);

// }