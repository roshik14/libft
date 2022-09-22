#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len) {
    if (!ft_strlen(little) || !len)
        return (char*) big;
    size_t sub_len = ft_strlen(little);
    size_t i = 0;
    while (*big && i++ < len) {
        if (!ft_strncmp(big, little, sub_len))
            return (char*)big;
        const char *chr = ft_strchr(big, ' ');
        if (!chr)
            return NULL;
        big = chr + 1;
    }
    return NULL;
}
