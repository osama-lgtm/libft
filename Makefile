CC = cc
SRCS = ft_toupper.c ft_tolower.c ft_isascii.c ft_isalpha.c

all: main

main: main.o ft_*.o
	gcc main.o ft_*.o -o main

main.o: main.c
	gcc -c main.c

ft_*.o: ft_*.c
	gcc -c ft_*.c

clean:
	rm *.o 
