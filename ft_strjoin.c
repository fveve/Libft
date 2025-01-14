/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:05:02 by arafa             #+#    #+#             */
/*   Updated: 2023/10/12 10:09:36 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned long int	ft_strlen(const char *s)
{
	int	x;

	x = 0;
	while (s[x])
		x++;
	return (x);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		x;
	int		y;

	tab = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (tab == NULL)
		return (NULL);
	x = 0;
	y = 0;
	while (s1[x])
	{
		tab[x] = s1[x];
		x++;
	}
	while (s2[y])
		tab[x++] = s2[y++];
	tab[x] = '\0';
	return (tab);
}

/*
#include <stdio.h>

int	main()
{
	char	s1[] = "t bo";
	char	s2[] = "   toi";
	char	*tab;

	tab = ft_strjoin(s1, s2);
	printf("%s", tab);
}
*/