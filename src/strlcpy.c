#include "libft.h"

size_t ft_strlcpy (char *dst, const char *src, size_t size) {
    for (size_t i = 0; i != size - 1; ++i) {
        dst[i] = src[i];
    }
    dst[size - 1] = '\0';
    return ft_strlen(src);
}
