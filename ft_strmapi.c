/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:19:00 by arafa             #+#    #+#             */
/*   Updated: 2023/10/07 11:02:26 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(const char	*s)
{
	int	x;

	x = 0;
	while (s[x])
		x++;
	return (x);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	char			*tab;

	x = 0;
	tab = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (tab == NULL)
		return (NULL);
	while (s[x])
	{
		tab[x] = s[x];
		x++;
	}
	tab[x] = '\0';
	x = 0;
	while (tab[x])
	{
		tab[x] = f(x, tab[x]);
		x++;
	}
	return (tab);
}
/*
#include <stdio.h>

int	main()
{
	char	*s = "tbotoi";

	s = ft_strmapi(s, ft_toupper);
	printf("%s", s);
}
*/