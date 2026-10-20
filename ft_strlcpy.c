/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakioud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:49:04 by aakioud           #+#    #+#             */
/*   Updated: 2026/10/15 18:49:08 by aakioud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t srcl ;
	size_t i;
	i = 0;
	srcl = 0;
	while (src[srcl])
		srcl++;
	if (size == 0)
		return (srcl);
	while (i < size -1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srcl);
}
// int main()
// {
// 	char src[] = "hello world";
// 	char dst[5] ;
// 	// int i = 0 ;
// 	printf("%d\n",ft_strlcpy(dst,src,5));
// 	printf("%s",dst);
// 	// while (i < 32)
// 	// {
// 	// 	printf("%c",dst[i]);
// 	// 	i++;
// 	// }
	
// 	return 0;
// }
