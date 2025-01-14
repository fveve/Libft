/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:17:45 by arafa             #+#    #+#             */
/*   Updated: 2023/10/13 15:13:11 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned long int n)
{
	unsigned long int	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if ((unsigned char *)src > (unsigned char *)dest)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i ++;
		}
	}
	else
	{
		while (0 < n)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n --;
		}
	}
	return (dest);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char s[20] = "";
	char e[20] = "dfdff";
    char r[20] = "dfdfdf";

    memmove(e, s, 20);
    ft_memmove(r, s, 20);
    printf("%s\n", e);
    printf("%s\n",r);
}
*/