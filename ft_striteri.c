/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:05:23 by arafa             #+#    #+#             */
/*   Updated: 2023/10/12 16:14:47 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_striteri(char const *s, void (*f)(unsigned int, char*))
{
	unsigned int	x;

	x = 0;
	while (s[x])
	{
		f(x, &((char *)s)[x]);
		x++;
	}
	return ((char *)s);
}

/*
#include <stdio.h>

int	main()
{
	char	*s = "tbotoi";

	s = ft_striteri(s, ft_toupper);
	printf("%s", s);
}
*/