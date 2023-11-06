NAME = libft.a

FUNCTIONS = isalpha isdigit isalnum isascii isprint strlen memset bzero memcpy memmove strlcpy strlcat toupper tolower strchr strrchr strncmp memchr memcmp strnstr atoi calloc strdup strjoin substr strtrim split itoa strmapi striteri putchar_fd putstr_fd putendl_fd putnbr_fd

BONUS_FUNCTIONS = lstadd_front lstsize lstlast lstadd_back lstdelone lstclear lstiter lstmap

SRC = $(addprefix ft_, $(addsuffix .c, $(FUNCTIONS)))

BONUS_SRC = $(addprefix ft_, $(addsuffix _bonus.c, $(BONUS_FUNCTIONS)))

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

CC = cc

FLAGS = -Wall -Wextra -Werror

HEADERS = libft.h

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	ar -cr $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

bonus:
	$(CC) $(FLAGS) -c $(BONUS_SRC)
	ar -cr $(NAME) $(BONUS_OBJ)
	ranlib $(NAME)

.PHONY: all bonus clean fclean re
