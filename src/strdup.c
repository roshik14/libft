#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s) {
    size_t len = ft_strlen(s);
    char *str = (char*) malloc(len);
    if (str != NULL) ft_strlcpy(str, s, len);
    return str;
}
