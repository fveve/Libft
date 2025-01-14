/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 19:28:46 by arafa             #+#    #+#             */
/*   Updated: 2023/10/12 13:50:08 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

static int	isinset(char const *s1, char const *set, int x)
{
	int	y;

	y = 0;
	while (set[y])
	{
		if (s1[x] == set[y])
			return (1);
		y++;
	}
	return (0);
}

static	int	len(const char *s1, const char *set)
{
	int	x;
	int	z;

	x = 0;
	z = 0;
	while (s1[x] && isinset(s1, set, x))
		x++;
	while (s1[x])
	{
		z++;
		x++;
	}
	while (isinset(s1, set, x - 1) && z > 0)
	{
		z--;
		x--;
	}
	return (z);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	int		x;
	int		z;
	int		strlen;

	x = 0;
	z = 0;
	strlen = len(s1, set);
	if (!s1 || !set)
		return (NULL);
	tab = malloc(sizeof(char) * (strlen + 1));
	if (tab == NULL)
		return (NULL);
	while (s1[x] && isinset(s1, set, x))
		x++;
	while (z < strlen)
		tab[z++] = s1[x++];
	tab[z] = '\0';
	return (tab);
}

/*
#include <stdio.h>

   int main ()
   {
   char    *tab;

   tab = ft_strtrim("\t   \n\n\n  \n\n\t    ", " \n\t");
   printf("%s", tab);
   }
*/