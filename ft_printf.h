/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 13:34:38 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/14 12:07:28 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include <limits.h>
# include "ft_printf.h"

int		ft_printf(const char *str, ...);
size_t	ft_write_int(int nb);
size_t	ft_write_uint(unsigned int nb);
size_t	ft_size_of_num(int nb, size_t base);
size_t	ft_write_hex(size_t nb, char *base);
void	ft_putnbr(int nb);
size_t	ft_strlen(const char *s);
size_t	ft_write_ptr(size_t ptr);
size_t	ft_strlen(const char *s);

#endif
