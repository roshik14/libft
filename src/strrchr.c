#include "libft.h"

char *ft_srrchr(const char *s, int c) {
    char *pointer = NULL;
    char *str = (char*)s;
    while (*str) {
        if (*str == c)
            pointer = str;
        str += 1;
    }
    return pointer;
}
