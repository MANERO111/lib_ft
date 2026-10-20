/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakioud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:38:36 by aakioud           #+#    #+#             */
/*   Updated: 2026/10/15 18:38:40 by aakioud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
	{
	size_t i;
	i = 0;
	unsigned char *p;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return s;
}

// int main()
// {
//     int arr[10] ;
//     ft_memset(&arr,5,2);
//     int i = 0;
//     while (arr[i])
//     {
//         printf("%d\n",arr[i]);
//         i++;
//     }
//     // printf("%d\n",arr[0]);

// }    
