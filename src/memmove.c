#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n) {
    if (!dest && !src)
        return NULL;
    unsigned char *d = (unsigned char*) dest;
    unsigned char *s = (unsigned char*) src;
    if (d > s) {
        for (int i = n - 1; i >= 0; --i)
            d[i] = s[i];
        return (void*)d;
    }
    ft_memcpy(dest, src, n);
    return dest;
}

