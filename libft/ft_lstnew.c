/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasalaza <jasalaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:09:07 by jasalaza          #+#    #+#             */
/*   Updated: 2021/12/30 20:55:46 by jasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int *content)
{
	t_list	*new;
	int		*a;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	a = (int *)malloc(sizeof(int));
	if (!a)
		return (NULL);
	*a = *content;
	new->content = a;
	new->next = NULL;
	return (new);
}
