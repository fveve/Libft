/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:04:38 by arafa             #+#    #+#             */
/*   Updated: 2023/10/10 14:00:16 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned long int n)
{
	unsigned long int			i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i ++;
	}
	return (s);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char s[10] = "";
    char d[10] = "t bo";
    int c = 57;

    memset(s, c, 20);
    ft_memset(d, c, 20 );
    printf("%s\n", s);
    printf("%s\n",d);
}
*/