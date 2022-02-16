/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasalaza <jasalaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:08:53 by jasalaza          #+#    #+#             */
/*   Updated: 2021/12/30 20:56:55 by jasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*d;
	t_list	*enter;

	enter = (*lst);
	while (enter)
	{
		d = enter->next;
		if (del)
			del(enter->content);
		free(enter);
		enter = d;
	}
	*lst = NULL;
}
