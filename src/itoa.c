#include "libft.h"

static size_t get_number_len(long n) {
    size_t len = 0;
    if (n < 0) {
        n *= -1;
        ++len;
    }
    while (n != 0) {
        ++len;
        n /= 10;
    }
    return len;
}

static char *get_zero_num() {
    char *str = ft_calloc(2, sizeof(char));
    if (str) {
        str[0] = '0';
        str[1] = '\0';
    }
    return str;
}

static void fill_str(char *str, long n, int num_len, int end) {
    for (int i = num_len - 1; i >= end; --i) {
        str[i] = n % 10 + '0';
        n /= 10;
    }
    str[num_len] = '\0';
}

static char* int_to_str(long n, int num_len) {
    char *str = ft_calloc(num_len + 1, sizeof(char));
    if (str) {
        int end = 0;
        if (n < 0) {
            str[0] = '-';
            n *= -1;
            end = 1;
        }
        fill_str(str, n, num_len, end);
    }
    return str;
}

char *ft_itoa(int n) {
    long num = n;
    size_t num_len = get_number_len(num);
    if (num_len) {
        return int_to_str(num, num_len);
    }
    return get_zero_num();
}
