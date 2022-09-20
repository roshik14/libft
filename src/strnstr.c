#include "libft.h"
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len) {
    if (!ft_strlen(little))
        return (char*) big;
    for (size_t i = 0, j = 0; i != len; ++i) {
        if (big[i] == little[j]) {
            size_t first = i;
            size_t second = j;
            while (big[first] == little[second]) {
                ++first;
                ++second;
            }
            if (first - i - 1 == ft_strlen(little)) {
                return (char*)&big[i];
            }
            ++j;
        }
    }
    return NULL;
}
