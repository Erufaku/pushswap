/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasalaza <jasalaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:10:02 by jasalaza          #+#    #+#             */
/*   Updated: 2021/12/30 20:38:38 by jasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find_c(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(set) == 0)
		return (ft_strdup(s1));
	while (j > -1 && ft_find_c(s1[j], set))
		j--;
	if (j == -1)
		return (ft_strdup(""));
	while (i < (int)ft_strlen(s1) && ft_find_c(s1[i], set))
		i++;
	return (ft_substr(s1, i, j - i + 1));
}
