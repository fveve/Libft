/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:51:25 by arafa             #+#    #+#             */
/*   Updated: 2023/10/14 16:46:58 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countword(char const *s, char c)
{
	size_t	x;
	size_t	i;

	x = 0;
	i = 0;
	while (x < ft_strlen(s))
	{
		while (s[x] == c && s[x])
			x++;
		if (s[x] != c && s[x])
			i++;
		while (s[x] != c && s[x])
			x++;
	}
	return (i);
}

char	**fill(char const *s, char c, char **tab)
{
	size_t	string_start;
	size_t	string_end;
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	string_start = 0;
	string_end = 0;
	while (y < countword(s, c))
	{
		while (s[x] == c)
			x++;
		string_start = x;
		while (s[x] != c)
			x++;
		string_end = x;
		tab[y] = ft_substr(s, string_start, string_end - string_start);
		if (!tab[y])
			return (NULL);
		y++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * (countword(s, c) + 1));
	if (!tab)
	{
		free (tab);
		return (NULL);
	}
	tab[countword(s, c)] = NULL;
	tab = fill(s, c, tab);
	return (tab);
}

/*
#include <stdio.h>

int    main()
{
int    x;
char    **tab;
x = 0;
tab = ft_split("Tripouille ", ' ');

while (tab[x] != NULL)
{
printf("%s\n", tab[x]);
x++;
}
while (tab[x])
{
free(tab[x]);
x++;
}
free(tab);
}
*/