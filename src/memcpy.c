#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n) {
    if (!dest && !src)
        return NULL;
    unsigned char *result = (unsigned char*) dest;
    const unsigned char* converted_src = (const unsigned char*) src;
    for (size_t i = 0; i != n; ++i) {
        result[i] = converted_src[i];
    }
    return result;
}
