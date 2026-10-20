/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakioud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:38:16 by aakioud           #+#    #+#             */
/*   Updated: 2026/10/15 18:38:18 by aakioud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	const unsigned char *srcp;
	unsigned char *destp;
	srcp = (const unsigned char *)src;
	destp = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		destp[i] = srcp[i];
		i++;
	}
	return (dest);
}

int main()
{
    int src[] = {1,2,3,4};
    int dest[5] = {0};
    ft_memcpy(&dest,&src,4);
    // memcpy(&dest,&src,8);

    int i = 0 ;
    while (i < 4)
    {
        printf("%d\n",dest[i]);
        i++;
    }
    return 0;    
}
