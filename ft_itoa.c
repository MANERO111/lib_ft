/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakioud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:28:48 by aakioud           #+#    #+#             */
/*   Updated: 2026/10/19 10:28:50 by aakioud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	number_len(long nb)
{
	size_t	count;

	count = 0;
	if (nb <= 0)
	{
		nb = -nb;
		count++;
	}
	while (nb > 0)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*ptr;
	long	nb;

	nb = n;
	len = number_len(nb);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (nb == 0)
		ptr[0] = '0';
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		ptr[--len] = nb % 10 + '0';
		nb /= 10;
	}
	return (ptr);
}
