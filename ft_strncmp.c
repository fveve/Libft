/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:26:56 by arafa             #+#    #+#             */
/*   Updated: 2023/10/11 15:40:23 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned long int n)
{
	unsigned long int	x;

	x = 0;
	while (x < n)
	{
		if (!s1[x] || !s2[x] || s1[x] != s2[x])
			return ((unsigned char)s1[x] - (unsigned char)s2[x]);
		x++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
#include <stddef.h>
int	main()
{
char s[20] = "899999999999";
char e[20] = "911111111111";
printf("ft_strlcmp : %d\n",ft_strncmp(s,e,20));
printf("strlcmp : %d\n",strncmp(s,e,20));

}
*/
