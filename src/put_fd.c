#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar_fd(char c, int fd) { write(fd, &c, 1); }

void ft_putstr_fd(char *s, int fd) { write(fd, s, ft_strlen(s)); }

void ft_putendl_fd(char *s, int fd) {
  ft_putstr_fd(s, fd);
  write(fd, "\n", sizeof(char));
}

static size_t get_int_len(long n) {
  size_t len = 1;
  while (n != 0) {
    len *= 10;
    n /= 10;
  }
  return len / 10;
}

void ft_putnbr_fd(int n, int fd) {
  long num = n;
  if (!num) {
    char c = num + '0';
    write(fd, &c, sizeof(char));
  } else {
    if (num < 0) {
      char minus = '-';
      write(1, &minus, sizeof(char));
      num *= -1;
    }
    size_t len = get_int_len(num);
    while (num != 0) {
      char c = (num / len) + '0';
      write(fd, &c, sizeof(char));
      num %= len;
      len /= 10;
    }
    if (!num && len) {
      char c = '0';
      write(fd, &c, sizeof(char));
    }
  }
}

static size_t get_uint_len(unsigned long n) {
  size_t len = 1;
  while (n != 0) {
    len *= 10;
    n /= 10;
  }
  return len / 10;
}

void ft_put_unbr_fd(unsigned int n, int fd) {
  unsigned long num = n;
  size_t len = get_uint_len(num);
  while (num != 0) {
    char c = (num / len) + '0';
    write(fd, &c, sizeof(char));
    num %= len;
    len /= 10;
  }
  if (!num && len) {
    char c = '0';
    write(fd, &c, sizeof(char));
  }
}

static size_t get_ulong_len(unsigned long long n) {
  size_t len = 1;
  while (n != 0) {
    len *= 10;
    n /= 10;
  }
  return len / 10;
}

void ft_put_ulongnbr_fd(unsigned long n, int fd) {
  unsigned long long num = n;
  size_t len = get_ulong_len(num);
  while (num != 0) {
    char c = (num / len) + '0';
    write(fd, &c, sizeof(char));
    num %= len;
    len /= 10;
  }
  if (!num && len) {
    char c = '0';
    write(fd, &c, sizeof(char));
  }
}
