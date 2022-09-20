#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void orig() {
    char cSrc[] = "Aticleworld";
    char *s = (char*) memchr(cSrc, 'u', 5);
    if (s == NULL) {
        write(1, "null\n", 5);
    } else {
        write(1, s, strlen(s));
        write(1, "\n", 1);
    }
}

void my() {
    char cSrc[] = "Aticleworld";
    char *s = (char*) ft_memchr(cSrc, 'u', 5);
    if (s == NULL) {
        write(1, "null\n", 5);
    } else {
        write(1, s, strlen(s));
        write(1, "\n", 1);
    }
}


int main() {
    orig();
    my();
    return 0;
}
