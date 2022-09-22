#include "libft.h"
static size_t get_number_len(int n) {
    size_t len = 0;
    if (n < 0) {
        n *= -1;
    }
    while (n != 0) {
        ++len;
        n /= 10;
    }
    return len;
}

char *ft_itoa(int n) {
    size_t num_len = get_number_len(n);
    char *str = ft_calloc(n < 0 ? num_len + 1 : num_len, sizeof(char));
    if (!str)
        return NULL;
    int end = 0;
    if (n < 0) {
        str[0] = '-';
        n *= -1;
        end = 1;
    }
    for (int i = num_len - 1; i >= end; --i) {
        str[i] = n % 10;
        n /= 10;
    }
    return str;
}
