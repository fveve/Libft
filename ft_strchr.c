/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:00:01 by arafa             #+#    #+#             */
/*   Updated: 2023/10/13 15:05:14 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	x;

	x = 0;
	while (s[x] != (char)c && s[x])
		x ++;
	if (s[x] == (char)c)
		return (&((char *)s)[x]);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
#include <stddef.h>
int	main()
{
	char s[20] = "2454545265";
	printf("ft_strchr : %s\n",ft_strchr(s,'4'));
	printf("strchr : %s\n",strchr(s,'4'));

}
*/