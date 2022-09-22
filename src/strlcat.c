#include "libft.h"
#include <stdio.h>

size_t ft_strlcat (char *dst, const char *src, size_t size) {
    if ((!dst && !src) || !size)
        return size;
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);
    if (size < dst_len) {
        return src_len + size;
    }
    if (size > src_len)
        size = src_len;
    for (size_t i = 0, j = dst_len; src[i] && i != size; ++i, ++j) {
        dst[j] = src[i];
    }
    dst[!src_len ? dst_len : dst_len + size] = '\0';
    return dst_len + src_len;
}
