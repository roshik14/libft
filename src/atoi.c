#include "libft.h"

static size_t get_num_len(const char *nptr) {
    size_t len = 0;
    while (*nptr && ft_isdigit(*nptr)) {
        ++len;
        nptr += 1;
    }
    return len;
}

int ft_atoi(const char *nptr) {
    size_t num = 0;
    size_t len = get_num_len(nptr);
    size_t mul = 1;
    for (int i = len - 1; i >= 0; --i) {
        int current = nptr[i] - '0';
        num += current * mul;
        mul *= 10;
    }
    return num;
}

