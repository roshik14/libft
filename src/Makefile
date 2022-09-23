SRCS = *.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: clean libft.a

libft.a: $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rcs libft.a $(OBJS)

clean:
	rm -rf *.o *.a
