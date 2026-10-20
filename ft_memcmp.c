/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakioud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:27:59 by aakioud           #+#    #+#             */
/*   Updated: 2026/10/18 10:28:01 by aakioud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	const unsigned char * ps1;
	const unsigned char * ps2;

	i = 0;
	ps1 = (const unsigned char *)s1;
	ps2 = (const unsigned char *)s2;
	while (i < n  && ps1[i] == ps2[i])
	{
		i++;
	}
	if(i == n)
		return (0);
	return (ps1[i] - ps2[i]);
}

//int main()
//{
//	//char s1[] = {'A', 'B', 'C', 'X'};
//	//char s2[] = {'A', 'B', 'C', 'Y'};
//
//	printf("%d\n",ft_memcmp("440" , "440" ,40));
//	printf("%d\n", memcmp("440" , "440" , 40));
//	return 0;
//}
