/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:10:31 by arafa             #+#    #+#             */
/*   Updated: 2023/10/16 08:48:32 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	x;

	if (fd > 0)
	{
		x = 0;
		while (s[x])
		{
			write(fd, &s[x], 1);
			x++;
		}
	}
}

/*
#include <fcntl.h>

int main ()
{
	int	fd;
	char	s[]= "t bo toi";

	fd = open("test.txt", O_RDWR);
	ft_putstr_fd(s, fd);
}
*/