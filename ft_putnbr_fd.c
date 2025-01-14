/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:07:32 by arafa             #+#    #+#             */
/*   Updated: 2023/10/13 20:50:22 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	nbr;
	int	mod;

	nbr = 0;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write (fd, "-", 1);
			nbr = -n;
		}
		else
			nbr = n;
		mod = nbr;
		if (nbr > 9)
		{
			mod = nbr % 10;
			ft_putnbr_fd(nbr / 10, fd);
		}
		ft_putchar(mod + 48, fd);
	}
}

/*
#include <fcntl.h>

int main ()
{
int    fd;

fd = open("test.txt", O_RDWR);
ft_putnbr_fd(-214748368, fd);
}
*/
