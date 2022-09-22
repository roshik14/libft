#include "libft.h"

char *ft_strdup(const char *s) {
    size_t len = ft_strlen(s) + 1;
    char *str = ft_calloc(len, sizeof(char));
    if (str != NULL) {
        ft_memcpy(str, s, len);
        str[len] = '\0';
    }
    return str;
}
