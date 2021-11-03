# -*- MakeFile -*-

cl = gcc -Wall -Wextra -Werror
NAME = main.o ft_isalpha.o ft_isdigit.o ft_isalnum.o

all: main ft_isalpha.o ft_isdigit.o ft_isalnum.o

main: $(NAME)
	$(cl) -o main $(NAME)

main.o: main.c libft.h
	$(cl) -Werror -c main.c

ft_isalpha.o: ft_isalpha.c
	$(cl) -c ft_isalpha.c

ft_isdigit.o: ft_isdigit.c
	$(cl) -c ft_isdigit.c

ft_isalnum.o: ft_isalnum.c libft.h
	$(cl) -c ft_
