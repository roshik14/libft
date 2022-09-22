#include "libft.h"

char *ft_strmapi(char const *s, char (*f) (unsigned int, char)) {
    unsigned int len = ft_strlen(s);
    char *str = ft_calloc(len + 1, sizeof(char));
    if (!str)
        return NULL;
    for (unsigned int i = 0; i != len; ++i) {
        str[i] = f(i, s[i]);
    }
    str[len] = '\0';
    return str;
}


