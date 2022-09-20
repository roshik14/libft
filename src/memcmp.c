#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n) {
    if (s1 != s2) {
        const unsigned char* str1 = (const unsigned char*) s1;
        const unsigned char* str2 = (const unsigned char*) s2;
        for (size_t i = 0; i != n; ++i) {
            if (str1[i] != str2[i])
                return str1[i] - str2[i];
        }
    }
    return 0;
}
