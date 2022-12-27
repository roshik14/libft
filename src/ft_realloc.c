#include "libft.h"
#include <stdlib.h>

void *ft_realloc(void *ptr, size_t old_size, size_t new_size, size_t size) {
  void *tmp = ft_calloc(old_size, size);
  if (!tmp) {
    return NULL;
  }
  ft_memcpy(tmp, ptr, old_size);
  free(ptr);
  void *new_ptr = ft_calloc(new_size, size);
  if (!new_ptr) {
    return NULL;
  }
  ft_memcpy(new_ptr, tmp, old_size);
  free(tmp);
  return new_ptr;
}
