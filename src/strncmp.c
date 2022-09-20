#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n) {
    if (s1 != s2) {
        for (size_t i = 0; i != n; ++i) {
            if (s1[i] != s2[i]) {
                return s1[i] - s2[i];
            }
        }
    }
    return 0;
}
