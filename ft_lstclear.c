#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *node;
	t_list *next_node;
	if (!lst || !del)
		return ;
	node = *lst;
	while (node)
	{
		next_node = node->next;
		ft_lstdelone(node, del);
		node = next_node;
	}
	*lst = NULL;
}
