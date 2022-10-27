
NAME = libftprintf.a

SRC = printf.c \
	*.c

OBJ = $(SRC:.c=.o)

HEADER = libftprintf.h

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar -rcs $@ $^

%.o: %.c
	gcc $(CFLAGS) -c -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
