#include "libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content) {
    t_list * lst = ft_calloc(1, sizeof(t_list));
    lst->content = content;
    lst->next = NULL;
}

void ft_lstadd_front(t_list **lst, t_list *new_lst) {
}


int ft_lstsize(t_list *lst) {
    int len = 0;
    while (lst->next) {
        ++len;
        lst->next = lst;
    }
    return len;
}

t_list *ft_lstlast(t_list *lst) {
    while (lst->next) {
        lst->next = lst;
    }
    return lst->content;
}


void ft_lstdelone(t_list *lst, void (*del)(void*)) {
    del(lst->content);
}

void ft_lstclear(t_list **lst, void (*del)(void*)) {
    t_list *l = *lst;
    while (l->next) {
        del(l->content);
        l->next = l;
        free(l);
    }
    lst = NULL;
}
