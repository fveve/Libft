/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:25:26 by arafa             #+#    #+#             */
/*   Updated: 2023/10/13 17:36:06 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(const char	*s)
{
	int	x;

	x = 0;
	while (s[x])
	{
		x++;
	}
	return (x);
}

char	*ft_strdup(const char *s)
{
	char	*tab;
	int		x;

	x = 0;
	tab = malloc(ft_strlen(s) + 1);
	if (!tab)
		return (NULL);
	while (s[x])
	{
		tab[x] = s[x];
		x++;
	}
	tab[x] = '\0';
	return (tab);
}

/*
#include <string.h>
#include <stdio.h>

int main ()
{
const char *s = "t bo toi";
char	*tab;
char	*tab2;

tab = strdup(s);
tab2 = ft_strdup(s);
printf("%s\n", tab);
printf("%s", tab2);
}
*/
