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
    write(fd, "\n", 1);
}

void ft_putnbr_fd(int n, int fd) {
    char *n_str = ft_itoa(n);
    write(fd, n_str, ft_strlen(n_str));
}
