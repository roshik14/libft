#include "libft.h"

size_t ft_strlcat (char *dst, const char *src, size_t size) {
    size_t start = ft_strlen(dst);
    for (size_t i = 0, j = start; i != size - 1; ++i, ++j) {
        dst[j++] = src[i];
    }
    dst[size - 1] = '\0';
    return start + ft_strlen(src);
}
