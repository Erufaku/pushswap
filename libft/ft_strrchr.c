/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasalaza <jasalaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:10:00 by jasalaza          #+#    #+#             */
/*   Updated: 2021/12/30 20:38:34 by jasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;
	int		i;

	i = 0;
	a = (char *)s;
	while (*a != '\0')
	{
		a++;
		i++;
	}
	while (*a != (char)c && i > 0)
	{
		a--;
		i--;
	}
	if (*a == (char)c)
		return (a);
	else
		return (NULL);
}
