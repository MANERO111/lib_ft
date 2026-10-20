/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakioud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:37:14 by aakioud           #+#    #+#             */
/*   Updated: 2026/10/15 18:37:17 by aakioud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
// #include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    char *p ;
    size_t i;
    p = (char *)s;
    i = 0;
    while (i < n)
    {
        p[i] = '\0';
        i++;
    }
}
#include <stdio.h>

int main()
{
    int arr[10] = {5,4,6,8} ;
    ft_bzero(&arr,8);
    int i = 0;
    while (i < 4)
    {
        printf("%d\n",arr[i]);
        i++;
    }
    // printf("%d\n",arr[0]);

}    
