#include "libft.h"

static size_t get_num_len(const char *nptr, int negative, int positive) {
    size_t len = 0;
    if (negative || positive) {
        ++len;
        ++nptr;
    }
    while (*nptr && ft_isdigit(*nptr)) {
        ++len;
        nptr += 1;
    }
    return len;
}

static int get_num_value(const char *nptr, size_t len, int end) {
    size_t num = 0;
    size_t mul = 1;
    for (int i = len - 1; i >= end; --i) {
        int current = nptr[i] - '0';
        num += current * mul;
        mul *= 10;
    }
    return num;
}

int ft_atoi(const char *nptr) {
    while ((!ft_isdigit(*nptr) && *nptr != '-') && ft_isspace(*nptr)) {
        nptr += 1;
    }
    if (!*nptr)
        return 0;
    int negative = nptr[0] == '-';
    int positive = nptr[0] == '+';
    size_t len = get_num_len(nptr, negative, positive);
    int num = get_num_value(nptr, len, negative || positive);
    if (negative)
        num *= -1;
    return num;
}

