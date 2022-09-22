#include "libft.h"

static size_t count_substr_len(char const *start, char const *end) {
    size_t len = 0;
    while (start != end) {
        ++len;
        start += 1;
    }
    return len;
}

static char* create_empty_str() {
    char *sub = ft_calloc(1, sizeof(char));
    if (!sub)
        return NULL;
    return sub;
}

static char const* skip_from_left(char const *s1, char const *set) {
    while (*s1 && ft_strchr(set, *s1))
        s1 += 1;
    return s1;
}

static char const* skip_from_right(char const *s1, char const *set) {
    char const *end = s1 + ft_strlen(s1) - 1;
    while (ft_strchr(set, *end))
        end -= 1;
    return end;
}

static char* get_substr(char const *s1, char const *end) {
    char *substr = ft_calloc(count_substr_len(s1, end) + 2, sizeof(char));
    if (!substr)
        return NULL;
    size_t i = 0;
    while (s1 != end) {
        substr[i++] = *s1;
        s1 += 1;
    }
    substr[i] = *end;
    substr[i+1] = '\0';
    return substr;
}

char *ft_strtrim(char const *s1, char const *set) {
    if (!s1 || !set)
        return NULL;
    if (ft_strlen(s1) && ft_strlen(set)) {
        s1 = skip_from_left(s1, set);
        if (ft_strlen(s1)) {
            char const *end = skip_from_right(s1, set);
            return get_substr(s1, end);
        }
    }
    return create_empty_str();
}
