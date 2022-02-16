/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasalaza <jasalaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:09:34 by jasalaza          #+#    #+#             */
/*   Updated: 2021/12/30 20:37:48 by jasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_words_count(const char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

int	ft_wordlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s == c)
		s++;
	while (*s && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

int	ft_malloc(char const *s, char c, char **arr, int i)
{
	arr[i] = (char *) malloc(ft_wordlen(s, c) + 1);
	if (!arr[i])
		return (0);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		n;

	i = -1;
	if (!s)
		return ((void *)0);
	n = ft_words_count(s, c);
	arr = (char **)malloc((n + 1) * sizeof(char *));
	if (!arr)
		return ((void *)0);
	while (++i < n)
	{
		if (ft_malloc(s, c, arr, i) == 0)
			return (NULL);
		j = 0;
		while (*s == c)
			s++;
		while (*s && (*s != c))
			arr[i][j++] = *s++;
		arr[i][j] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}
