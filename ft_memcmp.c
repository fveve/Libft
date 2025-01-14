/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:17:06 by arafa             #+#    #+#             */
/*   Updated: 2023/10/10 13:24:17 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned long int n)
{
	unsigned long int	x;

	x = 0;
	while (x < n)
	{
		if (((unsigned char *)s1)[x] > ((unsigned char *)s2)[x])
			return (1);
		if (((unsigned char *)s1)[x] < ((unsigned char *)s2)[x])
			return (-1);
		x++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char s[10] = "988888888";
	char e[10] = "899999999";

    printf("%d\n", memcmp(e, s, 5));
    printf("%d\n",ft_memcmp(e, s, 5));
}
*/