/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:03:17 by arafa             #+#    #+#             */
/*   Updated: 2023/10/13 16:35:18 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t l)
{
	unsigned long int	x;
	unsigned long int	y;

	x = 0;
	y = 0;
	if (little[0] == '\0')
		return (((char *)big));
	while (big[x] && x < l)
	{
		y = 0;
		while (big[x + y] == little[y] && x + y < l && big[x + y] && little[y])
			y++;
		if (!little[y])
			return ((char *)(big + x));
		x ++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stddef.h>
#include <bsd/string.h>
int	main()
{

printf("   strnstr : %s\nft_strnstr : %s\n",strnstr("" ,"", -1), 
ft_strnstr("" ,"", -1));

}
*/