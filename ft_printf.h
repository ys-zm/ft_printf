/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yzaim <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 13:34:38 by yzaim         #+#    #+#                 */
/*   Updated: 2022/11/04 18:59:05 by yzaim         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft/libft.h"
#include <string.h>
#include <stdarg.h>
#include <limits.h>

#ifndef PRINTF_H
# define PRINTF_H

int	ft_printf(const char *str, ...);
size_t	ft_write_int(int nb);
size_t	ft_write_uint(unsigned int nb);
size_t	ft_size_of_num(size_t nb, size_t base);
size_t	ft_write_hex(size_t nb, char *base);

#endif
