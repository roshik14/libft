#include "libft.h"

char *ft_strrchr(const char *s, int c) {
    char *pointer = NULL;
    char *str = (char*)s;
    while (*str) {
        if (*str == c)
            pointer = str;
        str += 1;
    }
    if (*str == c)
        return str;
    return pointer;
}
