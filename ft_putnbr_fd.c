/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: david <david@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 14:43:06 by david         #+#    #+#                 */
/*   Updated: 2021/01/15 14:48:06 by david         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('8', fd);
	}
	else if (n < 0 && n >= -2147483647)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else
	{
		if (n > 9 && n <= 2147483647)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(48 + n % 10, fd);
	}
}
