#include "libft.h"

void *ft_memset(void *s, int c, size_t n) {
    unsigned char* str = (unsigned char*) s;
    for (size_t i = 0; i != n; ++i) {
        str[i] = (unsigned char)c;
    }
    return str;
}
