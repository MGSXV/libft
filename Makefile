# -*- MakeFile -*-

# I still have to use other phony targets mentionned in the subject

cl = gcc -Wall -Wextra -Werror -g
OBJ_FILES = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_toupper.o ft_tolower.o ft_isascii.o ft_isprint.o ft_strlen.o ft_bzero.o ft_atoi.o \
		ft_memset.o ft_memcpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_strnstr.o ft_strlcat.o \
		ft_strlcpy.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o \
		ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o

all: a.out

a.out: $(OBJ_FILES) main.o
	$(cl) main.o $(OBJ_FILES) -o a.out

main.o: main.c libft.h $(OBJ_FILES)
	$(cl) -c main.c

# Part I
ft_isalpha.o: ft_isalpha.c
	$(cl) -c ft_isalpha.c

ft_isdigit.o: ft_isdigit.c
	$(cl) -c ft_isdigit.c

ft_isalnum.o: ft_isalnum.c libft.h
	$(cl) -c ft_isalnum.c

ft_toupper.o: ft_toupper.c libft.h
	$(cl) -c ft_toupper.c

ft_tolower.o: ft_tolower.c libft.h
	$(cl) -c ft_tolower.c

ft_isascii.o: ft_isascii.c
	$(cl) -c ft_isascii.c

ft_isprint.o: ft_isprint.c
	$(cl) -c ft_isprint.c

ft_strlen.o: ft_strlen.c libft.h
	$(cl) -c ft_strlen.c

ft_bzero.o: ft_bzero.c
	$(cl) -c ft_bzero.c

ft_atoi.o: ft_atoi.c libft.h
	$(cl) -c ft_atoi.c

ft_memset.o: ft_memset.c libft.h
	$(cl) -c ft_memset.c

ft_memcpy.o: ft_memcpy.c
	$(cl) -c -std=c99 ft_memcpy.c

ft_memmove.o: ft_memmove.c
	$(cl) -c ft_memmove.c

ft_memchr.o: ft_memchr.c libft.h
	$(cl) -c ft_memchr.c

ft_memcmp.o: ft_memcmp.c libft.h
	$(cl) -c ft_memcmp.c

ft_strchr.o: ft_strchr.c libft.h
	$(cl) -c ft_strchr.c

ft_strrchr.o: ft_strrchr.c libft.h
	$(cl) -c ft_strrchr.c

ft_strncmp.o: ft_strncmp.c libft.h
	$(cl) -c ft_strncmp.c

ft_strnstr.o: ft_strnstr.c libft.h
	$(cl) -c ft_strnstr.c

ft_strlcat.o: ft_strlcat.c libft.h
	$(cl) -c -std=c99 ft_strlcat.c

ft_strlcpy.o: ft_strlcpy.c libft.h
	$(cl) -c -std=c99 ft_strlcpy.c

ft_calloc.o: ft_calloc.c libft.h
	$(cl) -c ft_calloc.c

ft_strdup.o: ft_strdup.c libft.h
	$(cl) -c ft_strdup.c

# Part II
ft_substr.o: ft_substr.c libft.h
	$(cl) -c ft_substr.c

ft_strjoin.o: ft_strjoin.c libft.h
	$(cl) -c ft_strjoin.c

ft_strtrim.o: ft_strtrim.c libft.h
	$(cl) -c ft_strtrim.c

ft_split.o: ft_split.c libft.h
	$(cl) -c ft_split.c

ft_itoa.o: ft_itoa.c libft.h
	$(cl) -c ft_itoa.c

ft_strmapi.o: ft_strmapi.c libft.h
	$(cl) -c ft_strmapi.c

ft_striteri.o: ft_striteri.c libft.h
	$(cl) -c ft_striteri.c

ft_putchar_fd.o: ft_putchar_fd.c libft.h
	$(cl) -c ft_putchar_fd.c

ft_putstr_fd.o: ft_putstr_fd.c libft.h
	$(cl) -c ft_putstr_fd.c

ft_putendl_fd.o: ft_putendl_fd.c libft.h
	$(cl) -c ft_putendl_fd.c

ft_putnbr_fd.o: ft_putnbr_fd.c libft.h
	$(cl) -c ft_putnbr_fd.c

clean:
	rm -rf *.o a.out
