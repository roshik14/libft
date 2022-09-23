#include "libft.h"
#include <stdio.h>
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
    if (*lst) {
        t_list *cur = *lst;
        while (cur->next)
            cur = cur->next;
        cur->next = new_lst;
    } else {
        *lst = new_lst;
    }
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
    while (lst && lst->next)
        lst = lst->next;
    return lst;
}


void ft_lstdelone(t_list *lst, void (*del)(void*)) {
    del(lst->content);
}

void ft_lstclear(t_list **lst, void (*del)(void*)) {
    if (*lst) {
        t_list *l = *lst;
        while (l->next) {
            t_list *tmp = l->next;
            del(l->content);
            free(l);
            l = tmp;
        }
        del(l->content);
        free(l);
        *lst = NULL;
    }
}

void ft_lstiter(t_list *lst, void (*f)(void *)) {
    while (lst) {
        f(lst->content);
        lst = lst->next;
    }
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
    if (lst) {
        t_list *res = NULL;
        while (lst) {
            t_list *n = ft_lstnew(f(lst->content));
            if (!n) {
                ft_lstclear(&res, del);
                return NULL;
            }
            ft_lstadd_back(&res, n);
            lst = lst->next;
        }
        return res;
    }
    return NULL;
}
