/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:17:09 by enunez-n          #+#    #+#             */
/*   Updated: 2022/05/31 14:05:21 by enunez-n         ###   ########.fr       */
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
	else if (conversion == 's')
		printlen[0] += ft_printstring(va_arg(args, char *));
	else if (conversion == 'p')
		printlen[0] += ft_printptr(va_arg(args, unsigned long long));
	else if (conversion == 'i' || conversion == 'd')
		printlen[0] += ft_printnumber(args);
}

int	main(void)
{
	int	ptr[1];

	// Single char
	printf("Native test: %c \n", 'a');
	ft_printf("Custom test: %c \n", 'a');
	//String
	printf("Native test: %s \n", "String");
	ft_printf("Custom test: %s \n", "String");
	//Void *
	printf("Native test: %p \n", ptr);
	ft_printf("Custom test: %p \n", ptr);

	return (0);
}
