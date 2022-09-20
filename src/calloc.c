#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size) {
    void *data = malloc(nmemb * sizeof(size));
    ft_memset(data, 0, nmemb * size);
    return data;
}
