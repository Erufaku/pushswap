/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasalaza <jasalaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:08:25 by jasalaza          #+#    #+#             */
/*   Updated: 2021/12/30 21:05:32 by jasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sgn;
	int	num;
	int	i;

	sgn = 1;
	num = 0;
	i = 0;
	while ((*str == ' ') || (*str == '\t') || (*str == '\n')
		|| (*str == '\v') || (*str == '\f') || (*str == '\r'))
		str++;
	if ((*str == '+') || (*str == '-'))
		if (*str++ == '-')
			sgn = -1;
	while (ft_isdigit(*str))
	{
		num = (num * 10) + ((int)(*str) - '0');
		str++;
	}
	return (num * sgn);
}
