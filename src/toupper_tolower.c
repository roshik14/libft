#include "libft.h"

int ft_toupper(int c) {
    if (c < 'a' || c > 'z')
        return c;
    return c - 32;
}

int ft_tolower(int c) {
    if (c < 'A' || c > 'z')
        return c;
    return c + 32;
}
