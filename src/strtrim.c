#include "libft.h"

char *ft_strtrim(char const *s1, char const *set) {
    if (!s1 || !set)
        return NULL;
    while (*s1 && ft_strchr(set, *s1))
        s1 += 1;
    size_t right = ft_strlen(s1);
    while (*s1 && ft_strchr(set, *s1)) {
        right--;
        s1 += 1;
    }
    return ft_substr((char*)s1, 0, right + 1);
}
