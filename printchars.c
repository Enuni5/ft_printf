/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printchars.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:29:24 by enunez-n          #+#    #+#             */
/*   Updated: 2022/05/31 12:29:14 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printchar(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

size_t	ft_printstring(char *str)
{
	size_t	count;

	if (!str)
		str = "(null)";
	count = 0;
	ft_putstr_fd(str, 1);
	count += ft_strlen(str);
	return (count);
}
