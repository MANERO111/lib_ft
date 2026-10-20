/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakioud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:27:13 by aakioud           #+#    #+#             */
/*   Updated: 2026/10/18 10:27:16 by aakioud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

#include <string.h>

int	ft_atoi(const char *nptr)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr++ == '-')
			sign *= -1;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (result > (9223372036854775807 - (*nptr - '0')) / 10)
		{
			if (sign < 0)
				return (0);
			return (-1);
		}
		result = result * 10 + (*nptr++ - '0');
	}
	return ((int)(result * sign));
}

#include <stdlib.h>
#include <stdio.h>

int main()
{


printf("%d | %d\n", ft_atoi("30584300921369395200000"), atoi("30584300921369395200000"));

	return 0;
}
