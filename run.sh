# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    run.sh                                             :+:    :+:             #
#                                                      +:+                     #
#    By: yzaim <marvin@codam.nl>                      +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/04 18:22:19 by yzaim         #+#    #+#                  #
#    Updated: 2022/11/04 18:22:42 by yzaim         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

gcc main.c -L. -lftprintf -Llibft -lft && ./a.out

gcc main.c libftprintf.a libft.a
