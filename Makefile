# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/03 13:29:41 by ojamleh           #+#    #+#              #
#    Updated: 2026/10/05 14:24:06 by ojamleh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: main

main: main.o ft_*.o
	gcc main.o ft_*.o -o main

main.o: main.c
	gcc -c main.c

ft_*.o: ft_*.c
	gcc -c ft_*.c

clean:
	rm *.o 
