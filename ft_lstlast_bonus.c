#include "libft.h"

t_list    *ft_lstlast(t_list *lst)
{
    t_list    *p;

    p = let;
    While (p -> next != NULL)
        p = lst -> next;
    return (p);
}
