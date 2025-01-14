/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:47:53 by arafa             #+#    #+#             */
/*   Updated: 2023/10/09 14:41:25 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c <= 90 && c >= 65)
		c = c + 32;
	return (c);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main()
{
	printf("%c\n", ft_tolower(67));
}
*/