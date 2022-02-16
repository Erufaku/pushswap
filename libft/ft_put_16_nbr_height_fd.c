/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_16_nbr_height_fd.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasalaza <jasalaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:09:24 by jasalaza          #+#    #+#             */
/*   Updated: 2021/12/30 21:24:28 by jasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define A "0123456789ABCDEF"

int	check_putnbr_and_len(int n, int fd, int *num)
{
	if (n == -2147483648)
	{
		*num += 11;
		ft_putstr_fd("-2147483648", fd);
		return (1);
	}
	if (n == 2147483647)
	{
		*num += 10;
		ft_putstr_fd("2147483647", fd);
		return (1);
	}
	return (0);
}

void	ft_put_16_nbr_height_fd(long int n, int fd, int *num)
{
	if (n == -2147483648)
	{
		*num += 8;
		return (ft_putstr_fd("80000000", fd));
	}
	if (n == 2147483647)
	{
		*num += 8;
		return (ft_putstr_fd("7FFFFFFF", fd));
	}
	if (n < 0)
		ft_put_16_nbr_height_fd(4294967296 + n, fd, num);
	else if (n > 15)
	{
		ft_put_16_nbr_height_fd(n / 16, fd, num);
		ft_put_16_nbr_height_fd(n % 16, fd, num);
	}
	else
	{
		*num += 1;
		ft_putchar_fd(A[n], fd);
	}
}
