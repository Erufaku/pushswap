/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasalaza <jasalaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:08:46 by jasalaza          #+#    #+#             */
/*   Updated: 2021/12/30 21:00:41 by jasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	check_flag(int *n)
{
	if (*n < 0)
	{
		*n = *n * (-1);
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		flag;
	int		i;

	if (n == 0)
		return (ft_strdup("0"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	flag = check_flag(&n);
	a = (char *)malloc(flag + ft_intlen(n) + 1);
	if (!a)
		return (NULL);
	if (flag == 1)
		a[0] = '-';
	i = flag + ft_intlen(n) - 1;
	a[i + 1] = '\0';
	while (n > 0)
	{
		a[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (a);
}
