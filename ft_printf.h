/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:01:32 by enunez-n          #+#    #+#             */
/*   Updated: 2022/05/31 13:07:34 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

//ft_printf.c functions:
int		ft_printf(const char *format, ...);
void	ft_evaluator(const char conversion, va_list args, int *printlen);

// printchars.c functions:
size_t	ft_printchar(int c);
size_t	ft_printstring(char *str);

// printdigits.c functions:
size_t	ft_printnumber(va_list args);

// printhexa.c functions:
size_t	basehexa(uintptr_t num, int up);
size_t	ft_printptr(uintptr_t ptr);
#endif