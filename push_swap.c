#include <stdio.h>
#include "libft/libft.h"
void enumerate(t_list **a, int *cpy)
{
	t_list *t1;
	int i;

	t1 = *a;
	i = 1;
	printf("%d %d %d\n", cpy[0], cpy[1], cpy[2]);
	while (cpy[i - 1])
	{
		printf("%d\n", *(t1->content));
		if (*(t1->content) == cpy[i - 1])
		{
			t1->order = i;
			i++;
			t1 = *a;
		}
		else
			t1 = t1->next;
	}
}
int	*bubble_sort(t_list **a, int argc)
{
	t_list	*x;
	int		*tmp;
	int 	i;

	tmp = (int *)malloc(sizeof(argc));
	if (!tmp)
		return (NULL);
	i = 0;
	x = *a;
	while (argc > 0)
	{
		tmp[i] = *(x->content);
		x = x->next;
		argc--;
	}
		/*x = a;
	while (x->next)
	{
		y = x->next;
		while (y)
		{
			if (*(x->content) == *(y->content))
				exit(1);
			else if (*(x->content) < *(y->content))
			{
				tmp = x->content;
				x->content = y->content;
				y->content = tmp;
			}

			y = y->next;
		}
		x = x->next;
	}*/
	return (tmp);
}
int main(int argc, char **argv)
{
	t_list *a;
	t_list *b;
	int tmp;
	int i;

	b = NULL;
	i = 0;
	if (argc-- < 2)
		exit(1);
	while (argc - (i++) > 0)
	{
		tmp = ft_atoi(*(++argv));
		if (tmp == 0)
			exit(1);
		ft_lstadd_front(&a, ft_lstnew(&tmp));
	}
	b = a;
	while (b)
	{
		printf("%d\n", *(b->content));
		b = b->next;
	}
	enumerate(&a, bubble_sort(a, argc));
	b = a;
	while (b)
	{
		printf("%d %d\n", b->order, *(b->content));
		b = b->next;
	}
	return 0;
}