/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakioud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 16:34:17 by aakioud           #+#    #+#             */
/*   Updated: 2026/10/18 16:34:19 by aakioud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	free_ft_split(char **ptr, size_t n)
{
	size_t	i;

	i = 0;
	if (!ptr)
		return ;
	while (i < n)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

static int	fill_split(char **ptr, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;	

	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] == c && s[j])
			j++;
		k = j;
		while (s[j] != c && s[j])
			j++;
		if (j > k)
		{
			ptr[i] = ft_substr(s, k, j - k);
			if (!ptr[i++])
			{
				free_ft_split(ptr, i - 1);
				return (0);
			}
		}
	}
	ptr[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	if (!fill_split(ptr, s, c))
		return (NULL);
	return (ptr);
}
