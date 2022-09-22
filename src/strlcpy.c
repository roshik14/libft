#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size) {
    if (size == 0)
        return ft_strlen(src);
    char *d = dst;
    const char *s = src;
    size_t ind = 0;
    while (*s && *d && ind < size - 1) {
        *d++ = *s++;
        ind++;
    }
    if (d < dst + size)
        *d = '\0';
    else if (size > 0)
        d[size - 1] = '\0';
    return ft_strlen(src);
}
