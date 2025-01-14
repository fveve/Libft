/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:05:03 by arafa             #+#    #+#             */
/*   Updated: 2023/10/12 16:08:17 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned long int n)
{
	unsigned long int			i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i ++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char s[20] = "gfkkjkjjkjkjkjk";
	char e[20] = "aaaaaaaaa";
    char r[20] = "aaaaaaaaa";

    memcpy(e, s, 30);
    ft_memcpy(r, s, 30 );
    printf("%s\n", e);
    printf("%s\n",r);
}
*/