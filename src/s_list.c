#include "libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content) {
    t_list * lst = ft_calloc(1, sizeof(t_list));
    if (lst) {
        lst->content = content;
        lst->next = NULL;
    }
    return lst;
}

void ft_lstadd_front(t_list **lst, t_list *new_lst) {
    new_lst->next = *lst;
    *lst = new_lst;
}

void ft_lstadd_back(t_list **lst, t_list *new_lst) {
    t_list *cur = *lst;
    while (cur) {
        cur = cur->next;
    }
    new_lst->next = cur;
    cur = new_lst;
}

int ft_lstsize(t_list *lst) {
    int len = 0;
    while (lst) {
        ++len;
        lst = lst->next;
    }
    return len;
}

t_list *ft_lstlast(t_list *lst) {
    while (lst) {
        lst = lst->next;
    }
    return lst->content;
}


void ft_lstdelone(t_list *lst, void (*del)(void*)) {
    del(lst->content);
}

void ft_lstclear(t_list **lst, void (*del)(void*)) {
    t_list *l = *lst;
    while (l) {
        del(l->content);
        l = l->next;
    }
    lst = NULL;
}

void ft_lstiter(t_list *lst, void (*f)(void *)) {
    while (lst) {
        f(lst->content);
        lst = lst->next;
    }
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
    t_list *res = NULL;
    while (lst) {
        res = ft_lstnew(f(lst->current));
        if (!res)
            return NULL;
        lst = lst->next;
        if (lst) {
            t_list *next = ft_lstnew(lst->next);
            res->next = next;
            res = res->next;
        }
    }
    return res;
}
