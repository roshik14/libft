#include "libft.h"
#include <unistd.h>

void ft_putchar_fd(char c, int fd) {
    write(fd, &c, 1);
}

void ft_putstr_fd(char *s, int fd) {
    write(fd, s, ft_strlen(s));
}

void ft_putendl_fd(char *s, int fd) {
    ft_putstr_fd(s, fd);
    write(fd, "\n", sizeof(char));
}

static size_t get_num_len(long n) {
    size_t len = 1;
    while (n != 0) {
        len *= 10;
        n /= 10;
    }
    return len / 10;
}

void ft_putnbr_fd(int n, int fd) {
    char minus = '-';
    if (!n) {
        char c = n + '0';
        write(fd, &c, sizeof(char));
    }
    long num = n;
    if (num < 0) {
        write(1, &minus, sizeof(char));
        num *= -1l;
    }
    int len = get_num_len(num);
    while (num != 0) {
        char c = num / len + '0';
        write(fd, &c, sizeof(char));
        num %= len;
        len /= 10;
    }
}
