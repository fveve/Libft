/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:39:14 by arafa             #+#    #+#             */
/*   Updated: 2023/10/10 11:01:23 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned long int n)
{
	unsigned long int	i;
	unsigned char		*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i ++;
	}
}
/*
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int *s = malloc(3 * sizeof(int));
	int	*s2 = malloc(3 * sizeof(int));

	bzero(s, 3);
	ft_bzero(s2, 3);
 
	printf("%ls", s);
	printf("%ls", s2);
}
*/