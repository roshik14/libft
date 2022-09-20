#include "libft.h"

char *ft_strchr(const char *s, int c) {
    char *str = (char*) s;
    while(*str) {
        if (*str == c) {
            return str;
        }
        s += 1;
    }
    return NULL;
}
