#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2) {
    size_t first_len = ft_strlen(s1);
    size_t second_len = ft_strlen(s2);
    char *res = ft_calloc(first_len + second_len, sizeof(char));
    if (!res)
        return NULL;
    ft_strlcat(res, s1, first_len);
    ft_strlcat(res, s2, second_len);
    return res;
}

