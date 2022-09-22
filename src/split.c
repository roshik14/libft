#include "libft.h"
#include <stdlib.h>

static size_t get_delim_len(char const *s, char c) {
    size_t len = 0;
    while (*s) {
        if (*s == c)
            ++len;
        s += 1;
    }
    return len + 1;
}

static size_t get_substr_len(char const *s, char c) {
    size_t len = 0;
    while (*s && *s != c) {
        ++len;
        s += 1;
    }
    return len;
}

char **ft_split(char const *s, char c) {
    char **splited = (char**) ft_calloc(get_delim_len(s, c), sizeof(char*));
    if (!splited)
        return NULL;
    size_t splited_index = 0;
    while (*s) {
        if (*s == c) {
            s += 1;
        } else {
            size_t len = get_substr_len(s, c);
            char *sub = ft_substr(s, 0, len);
            if (!sub)
                return NULL;
            splited[splited_index++] = sub;
        }
    }
    return splited;
}
