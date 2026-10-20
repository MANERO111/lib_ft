/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakioud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:38:24 by aakioud           #+#    #+#             */
/*   Updated: 2026/10/15 18:38:26 by aakioud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i ;
	const unsigned char *sp ;
	unsigned char *dp ;
	i = 0;
	if (src == dest || n == 0)
		return (dest);
	sp = (const unsigned char *)src;
	dp = (unsigned char *)dest;
	if(sp > dp)
	{
		while (i < n)
		{
			dp[i] = sp[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			dp[n] = sp[n];
		}
	}
	return (dest);
}

// int main()
// {
// 	char a[] = "ABCDE";

// /* 1. No overlap */
// 	// ft_memmove(a + 2, "XYZ", 3);
// 	// memmove(a + 2, "XYZ", 3);


// 	/* 2. Shift right: overlapping */
// 	ft_memmove(a + 1, a, 4);

// 	/* 3. Shift left: overlapping */
// 	// ft_memmove(a, a + 1, 4);
// 	// ft_memmove(a, a + 1, 0);


// 	// ft_memmove(arr,arr+1,4);
// 	// memmove(arr,arr+1,4);

	
// 	printf("%s",a);
	
// }
