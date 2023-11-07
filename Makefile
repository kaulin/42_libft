NAME = libft.a

FUNCTIONS = isalpha isdigit isalnum isascii isprint strlen memset bzero memcpy memmove strlcpy strlcat toupper tolower strchr strrchr strncmp memchr memcmp strnstr atoi calloc strdup strjoin substr strtrim split itoa strmapi striteri putchar_fd putstr_fd putendl_fd putnbr_fd

BONUS_FUNCTIONS = lstadd_front lstsize lstlast lstadd_back lstdelone lstclear lstiter lstmap

SRC = $(addprefix ft_, $(addsuffix .c, $(FUNCTIONS)))

BONUS_SRC = $(addprefix ft_, $(addsuffix _bonus.c, $(BONUS_FUNCTIONS)))

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

HEADERS = libft.h

all: $(NAME)

bonus: .b

$(NAME): $(OBJ)
	ar -crs $(NAME) $@ $^ 
	ranlib $(NAME)

$./%.o: $./%.c
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ)
	@rm -f .b

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.b: $(BONUS_OBJ) $(OBJ)
	ar -crs $(NAME) $^
	ranlib $(NAME)
	@touch .b

.PHONY: all bonus clean fclean re
