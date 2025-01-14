/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:25:14 by arafa             #+#    #+#             */
/*   Updated: 2023/10/13 12:09:43 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int	ft_strlen(const char	*s)
{
	int	x;

	x = 0;
	while (s[x])
	{
		x++;
	}
	return (x);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	x;
	size_t	y;

	if (ft_strlen(s) <= start || s == NULL)
	{
		tab = malloc(sizeof(char));
		tab[0] = '\0';
		return (tab);
	}
	else if (len >= ft_strlen(s))
		tab = malloc(sizeof(char) * (ft_strlen(s) + 1));
	else
		tab = malloc(sizeof(char) * (len + 1));
	if (tab == NULL)
	{
		free(tab);
		return (NULL);
	}
	x = start;
	y = 0;
	while (s[x] && y < len)
		tab[y++] = s[x++];
	tab[y] = '\0';
	return (tab);
}
/*
#include <stdio.h>

int	main()
{
char	s[] = "";
char	*tab;

tab = ft_substr("i just want this part #############", 5, 10);
printf("%s", tab);
}
*/
