#include "libft.h"

size_t ft_strlen(const char *s) {
    size_t len = 0;
    while(*s) {
        ++len;
        s += 1;
    }
    return len;
}
