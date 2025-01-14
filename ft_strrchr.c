/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:17:37 by arafa             #+#    #+#             */
/*   Updated: 2023/10/11 15:00:06 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	while (s[x])
	{
		if (s[x] == (char)c)
			y = x;
		x ++;
	}
	if (s[y] != (char)c)
	{
		if ((char)c == '\0')
			return (&((char *)s)[x]);
		else
			return (NULL);
	}
	return (&((char *)s)[y]);
}
/*
#include <string.h>
#include <stdio.h>
#include <stddef.h>
int    main()
{
    char s[20] = "249545945296959";
    printf("ft_strchr : %s\n",ft_strrchr("xteste",'x'));
    printf("strchr : %s\n",strrchr("xteste",'x'));

}
*/