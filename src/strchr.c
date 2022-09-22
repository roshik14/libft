#include "libft.h"

char *ft_strchr(const char *s, int c) {
    char *str = (char*) s;
    while (*str) {
        if (*str == c)
            return str;
        str += 1;
    }
    if (*str == c)
        return str;
    return NULL;
}
