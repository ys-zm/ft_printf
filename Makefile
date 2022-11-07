# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yzaim <marvin@codam.nl>                      +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/04 14:27:38 by yzaim         #+#    #+#                  #
#    Updated: 2022/11/04 18:33:34 by yzaim         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

NAME_libft = libft/libft.a

SRC = ft_printf.c \
	ft_hex.c \
	ft_dec.c \
	ft_utoa.c \
	ft_strlen.c \
	ft_putnbr.c \
	ft_ptr.c

OBJ = $(SRC:.c=.o)

HEADER = printf.h

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $^

%.o: %.c
	gcc $(CFLAGS) -c -o $@ $^

#$(NAME_libft):
#	$(MAKE) -C libft all

clean:
	rm -f $(OBJ)
#	$(MAKE) -C  libft clean
	
fclean: clean
	rm -f $(NAME)
#	$(MAKE) -C libft fclean

re: fclean all

.PHONY: clean fclean all re
