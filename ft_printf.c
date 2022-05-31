/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:17:09 by enunez-n          #+#    #+#             */
/*   Updated: 2022/05/31 12:19:54 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printlen[1];

	*printlen = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			ft_evaluator(*(format + 1), args, printlen);
			format++;
		}
		else
		{
			ft_putchar_fd(*format, 1);
			printlen[0] += 1;
		}
		format++;
	}
	return (*printlen);
}

void	ft_evaluator(const char conversion, va_list args, int *printlen)
{
	if (conversion == 'c')
		printlen[0] += ft_printchar(va_arg(args, int));
	else if (conversion == 'i' || conversion == 'd')
		printlen[0] += ft_printnumber(args);
	else if (conversion == 's')
		printlen[0] += ft_printstring(args);
}

int	main(void)
{
	printf("%c \n", 'a');
	ft_printf("Hola %c", 'b');
	return (0);
}
