/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:10:31 by arafa             #+#    #+#             */
/*   Updated: 2023/10/13 20:51:10 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	x;

	x = 0;
	while (s[x])
	{
		write(fd, &s[x], 1);
		x++;
	}
	write(fd, "\n", 1);
}

/*
#include <fcntl.h>

int main ()
{
int	fd;
char	s[]= "t bo toi";

fd = open("test.txt", O_RDWR);
ft_putendl_fd(s, fd);
}
*/
