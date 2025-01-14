/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:19:42 by arafa             #+#    #+#             */
/*   Updated: 2023/10/08 16:53:12 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char	*s)
{
	size_t	x;

	x = 0;
	while (s[x])
	{
		x++;
	}
	return (x);
}

/*
#include <string.h>
#include <stdio.h>

int main ()
{
const char *s = "t bo";

printf("%s\n",strlen(s) == ft_strlen(s)? s :">:(");
}
*/