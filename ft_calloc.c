/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakioud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:26:38 by aakioud           #+#    #+#             */
/*   Updated: 2026/10/18 10:26:39 by aakioud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;
	size_t	l;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > ((size_t) - 1) / size)
		return (NULL);
	l = nmemb * size;
	p = malloc(l);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, l);
	return ((void *)p);
}
