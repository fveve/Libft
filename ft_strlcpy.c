/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:47:45 by arafa             #+#    #+#             */
/*   Updated: 2023/10/11 13:57:01 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned long int	ft_strlen(const char *s)
{
	int	x;

	x = 0;
	while (s[x])
		x++;
	return (x);
}

unsigned long int	ft_strlcpy(char *dst, const char *src, unsigned long int n)
{
	unsigned long int	y;
	unsigned long int	x;

	y = 0;
	x = 0;
	if (0 >= n)
		return (ft_strlen(src) + n);
	while (src[y] && n - 1 > x)
	{
		dst[x] = src[y];
		x++;
		y++;
	}
	dst[x] = '\0';
	return (ft_strlen(src));
}

/*
#include <bsd/string.h>
#include <stdio.h>
#include <stddef.h>
int	main()
{
	char s[10] = "aadsddsd";
	char e[20] = "aaa";
	char r[10] = "aadsddsd";

	ft_strlcpy(r,e,0);
	strlcpy(s,e,0);
	printf("ft_strlcpy : %s\n",r);
	printf("strlcpy : %s",s);
}
*/