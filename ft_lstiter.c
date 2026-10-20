#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *nd;
	if(!lst || !f)
		return ;
	nd = lst;
	while (nd)
	{
		f(nd->content);
		nd = nd->next;
	}
}