#include "libft.h"

int ft_isdigit(int c) {
    return c >= '0' && c <= '9';
}

int ft_isalpha(int c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int ft_isalnum(int c) {
    return ft_isalpha(c) || ft_isdigit(c);
}

int ft_isascii(int c) {
    return c >= 0x0 && c <= 0x7f;
}

int ft_isprint(int c) {
    return c > 0x1f && c < 0x7f;
}

int ft_isspace(int c) {
    return c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v';
}
