/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakioud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:05:39 by aakioud           #+#    #+#             */
/*   Updated: 2026/10/21 12:05:41 by aakioud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
