#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len) {
    if (start >= len || !s || !len) {
        char *sub = (char*)ft_calloc(1, sizeof(char));
        return sub ? sub : NULL;
    }
    char *sub = (char*) ft_calloc(len+1, sizeof(char));
    if (sub) {
        unsigned s_len = ft_strlen(s);
        for (size_t i = start, j = 0; i != s_len && j != len; ++i, ++j) {
            sub[j] = s[i];
        }
        sub[len] = '\0';
    }
    return sub;
}
