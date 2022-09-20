#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n) {
    unsigned char *result = (unsigned char*) dest;
    const unsigned char* converted_src = (const unsigned char*) src;
    unsigned char tmp[n];
    ft_memcpy(tmp, converted_src, n);
    ft_memcpy(dest, tmp, n);
    return dest;
}
