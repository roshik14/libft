#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len) {
    char *sub = (char*) ft_calloc(len, sizeof(char));
    if (!sub)
        return NULL;
    unsigned s_len = ft_strlen(s);
    for (size_t i = start, j = 0; i != s_len && j != len - 1; ++i, ++j) {
        sub[j] = s[i];
    }
    sub[len - 1] = '\0';
    return sub;
}
