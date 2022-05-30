/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:17:09 by enunez-n          #+#    #+#             */
/*   Updated: 2022/05/30 18:29:54 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	printlen;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			ft_evaluator(*format++, &printlen);
		}
		else
		{
			ft_putchar_fd(*format, 1);
			printlen++;
		}
		format++;
	}
	return (printlen);
}

size_t	ft_printchar(void)
{
	size_t	count;
	char	c;

	count = 0;
	c = va_arg(args, int);
	ft_putchar_fd(c, 1);
	count++;
	return (count);
}

void	ft_evaluator(char *conversion, size_t printlen)
{
	if (*conversion == "c")
		printlen = ft_printchar();
	else
	{
	}
}
