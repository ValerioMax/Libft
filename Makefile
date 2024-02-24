# Nome del progetto
NAME = libft.a

# Compilatore e opzioni
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Lista dei file sorgente
SRC_FILES = ft_bzero.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strlcat.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\


# Costruzione della lista di oggetti
OBJ_FILES = $(SRC_FILES:.c=.o)

# Regole
all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re 
