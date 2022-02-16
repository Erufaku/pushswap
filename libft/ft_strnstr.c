/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasalaza <jasalaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:09:58 by jasalaza          #+#    #+#             */
/*   Updated: 2021/12/30 20:38:31 by jasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*res;
	int		i;

	res = (char *)big;
	i = 0;
	if (*little == '\0')
		return (res);
	while (len-- && *res != '\0')
	{
		if (ft_strncmp((const char *)res, little, ft_strlen(little)) == 0)
			return (res);
		res++;
		if (ft_strlen(little) > len)
			return (NULL);
	}
	return (NULL);
}
