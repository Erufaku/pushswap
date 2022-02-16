/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasalaza <jasalaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:09:36 by jasalaza          #+#    #+#             */
/*   Updated: 2021/12/30 20:38:00 by jasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*a;
	int		i;

	i = 0;
	a = (char *)s;
	while (a[i] != (char)c && a[i] != '\0')
		i++;
	if (a[i] == (char)c)
		return (a + i);
	else
		return (NULL);
}
