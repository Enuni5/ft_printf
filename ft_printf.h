/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:01:32 by enunez-n          #+#    #+#             */
/*   Updated: 2022/05/30 18:33:25 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
size_t	ft_printchar(va_list args);
void	ft_evaluator(char *conversion, va_list args, size_t printlen);

#endif