# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yzaim <marvin@codam.nl>                      +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/04 14:27:38 by yzaim         #+#    #+#                  #
#    Updated: 2022/11/22 11:39:16 by yzaim         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

SRC = ft_printf.c \
	ft_hex.c \
	ft_dec.c \
	ft_utoa.c \
	ft_putnbr.c \
	ft_ptr.c \
	ft_strlen.c \
	ft_error.c

OBJ = $(SRC:.c=.o)

HEADER = ft_printf.h

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar -rcs $@ $^

%.o: %.c
	gcc $(CFLAGS) -c -o $@ $^

clean:
	rm -f *.o
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
