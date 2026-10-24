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

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*sp ;
	unsigned char		*dp ;

	if (src == dest || n == 0)
		return (dest);
	sp = (const unsigned char *)src;
	dp = (unsigned char *)dest;
	if (sp > dp)
		return (ft_memcpy(dest, src, n));
	else
	{
		while (n > 0)
		{
			--n;
			dp[n] = sp[n];
		}
	}
	return (dest);
}
