/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:22:34 by arafa             #+#    #+#             */
/*   Updated: 2023/10/13 15:25:06 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i ++;
	}
}

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*tab;

	tab = malloc(nmeb * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, nmeb * size);
	return (tab);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int *s = ft_calloc(0,0);
	int	*s2 = calloc(0,0);

	printf("%ls\n%ls", s, s2);
}
*/