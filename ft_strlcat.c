/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:23:49 by arafa             #+#    #+#             */
/*   Updated: 2023/10/11 16:41:46 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, unsigned long int n)
{
	unsigned long int	y;
	unsigned long int	x;
	unsigned long int	destlen;
	unsigned long int	srclen;

	y = 0;
	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	x = destlen;
	if (n <= destlen)
		return (srclen + n);
	while (src[y] && n - 1 > x)
	{
		dst[x] = src[y];
		x++;
		y++;
	}
	dst[x] = '\0';
	return (destlen + srclen);
}
/*
#include <bsd/string.h>
#include <stdio.h>
#include <stddef.h>
int	main()
{
	char s[20] = "24565";
	char e[10] = "99999";
	char r[20] = "24565";
	printf("ft_strlcat : %lu\n",ft_strlcat(r,e,20));
	printf("strlcat : %zu\n",strlcat(s,e,20));

}
*/