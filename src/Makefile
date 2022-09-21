SRCS = *.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: clean libft.so

libft.so: $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)
	ar rcs libft.a $(OBJS)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)
clean:
	rm -rf *.o *.so

bonus:
	$(CC) $(CFLAGS) -c $(SRCS)
	gcc -nostartfiles -shared -D BONUS -o lift.so $(OBJS)
	ar rcs libft.a $(OBJS)

