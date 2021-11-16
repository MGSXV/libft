CL = gcc -Wall -Wextra -Werror
NAME = libft.a
OBJ_FILES = main.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_toupper.o ft_tolower.o ft_isascii.o ft_isprint.o ft_strlen.o ft_bzero.o ft_atoi.o \
        ft_memset.o ft_memcpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_strnstr.o ft_strlcat.o \
        ft_strlcpy.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o \
        ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar -rcs $(NAME) $(OBJ_FILES)

%.o: %.c libft.h
	$(CL) -c $< -o $@

.PHONY: all clean fclean re

clean:
	rm -rf $(OBJ_FILES)
fclean: clean
	rm -rf $(NAME)
re: fclean all
