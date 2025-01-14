/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:53:59 by arafa             #+#    #+#             */
/*   Updated: 2023/10/11 15:56:27 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned long int n)
{
	unsigned long int	i;

	i = 0;
	if (n == 0)
		return (NULL);
	while (((unsigned char *)s)[i] != (unsigned char)c && i < n - 1)
		i++;
	if (((unsigned char *)s)[i] == (unsigned char)c)
		return (&((char *)s)[i]);
	return (NULL);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char s[20] = "t bo";

    printf("%p\n",memchr(s, 30, 10));
    printf("%p", ft_memchr(s, 30, 10));
}
*/
