#include "libft.h"

void ft_bzero(void *s, size_t n) {
    unsigned char *str = (unsigned char*) s;
    for (size_t i = 0; i != n; ++i) {
        str[i] = 0;
    }
}
