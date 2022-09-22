#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2) {
    size_t first_len = ft_strlen(s1);
    size_t second_len = ft_strlen(s2);
    char *res = ft_calloc(first_len + second_len + 2, sizeof(char));
    if (!res)
        return NULL;
    ft_memcpy(res, s1, first_len);
    for (size_t i = first_len, j = 0; j != second_len; ++j, ++i) {
        res[i] = s2[j];
    }
    return res;
}


