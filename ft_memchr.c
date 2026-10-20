/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakioud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:27:42 by aakioud           #+#    #+#             */
/*   Updated: 2026/10/18 10:27:49 by aakioud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i ;
	const unsigned char *p;
	p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if(p[i] == (unsigned char)c)
			return((void *)(p + i));
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	char s[] = "abcdef";
// 	printf("%s",(char *)ft_memchr(s,97,6));

// }
