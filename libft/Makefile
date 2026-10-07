CC = cc
CFLAGS = -Wall -Wextra -Werror


SRCS = ft_atoi.c     ft_isdigit.c  ft_memset.c   ft_strlen.c	ft_tolower.c\
ft_bzero.c    ft_isprint.c  ft_strcat.c   ft_strncmp.c	ft_toupper.c\
ft_calloc.c   ft_memchr.c   ft_strchr.c   ft_strnstr.c	ft_isalnum.c\
ft_memcmp.c   ft_strdup.c   ft_strrchr.c	ft_isalpha.c  ft_memcpy.c\
ft_strjoin.c  ft_strtrim.c	ft_isascii.c  ft_memmove.c  ft_strlcpy.c  ft_substr.c\


NAME=: libft.a

all: main

main: main.o ft_*.o
	cc main.o ft_*.o -o main

main.o: main.c
	cc -c main.c

ft_*.o: ft_*.c
	cc -c ft_*.c

clean:
	rm *.o

re: clean all

.PHONY: re clean fclean all
