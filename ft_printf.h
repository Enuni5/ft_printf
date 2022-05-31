/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:01:32 by enunez-n          #+#    #+#             */
/*   Updated: 2022/05/31 18:41:56 by enunez-n         ###   ########.fr       */
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
int		ft_printchar(int c);
int		ft_printstring(char *str);

// printdigits.c functions:
int		ft_printdec(long num);
int		ft_printudec(unsigned long n);
int		ft_countdec(long num);

// printhexa.c functions:
int		ft_basehexa(unsigned long long num, int up);
int		ft_printptr(uintptr_t ptr);
#endif