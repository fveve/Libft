/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:59:26 by arafa             #+#    #+#             */
/*   Updated: 2023/10/12 09:10:11 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	x;
	int	sign;
	int	res;

	x = 0;
	sign = 1;
	res = 0;
	while ((nptr[x] >= 9 && nptr[x] <= 13) || nptr[x] == 32)
		x++;
	if (nptr[x] == 43 || nptr[x] == 45)
	{
		if (nptr[x] == 45)
			sign *= -1;
		x++;
	}
	while (nptr[x] >= 48 && nptr[x] <= 57)
	{
		res = res * 10 + (nptr[x] - 48);
		x++;
	}
	return (res * sign);
}

/*
#include <stdlib.h>
#include <stdio.h>
int	main ()
{
	const char	*s = "      -454512";
	printf("%d\n", atoi(s));
	printf("%d\n", ft_atoi(s));
}
*/