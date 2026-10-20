/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakioud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 10:43:57 by aakioud           #+#    #+#             */
/*   Updated: 2026/10/16 10:43:59 by aakioud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	size_t i;
	i = 0;
	while (s[i])
		i++;
	if((unsigned char)s[i] == (unsigned char)c)
		return ((char *)s + i);
	while (i > 0)
	{
		i--;
		if ((unsigned char)s[i] == (unsigned char)c)
			return (char *)s + i;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%s",ft_strrchr("banana", '\0'));

// 	return 0;
// }
