/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:30:18 by enunez-n          #+#    #+#             */
/*   Updated: 2022/05/31 14:05:01 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printptr(uintptr_t ptr)
{
	size_t	count;

	count = 2;
	write(1, "0x", 2);
	if (!ptr)
	{
		write(1, "0", 1);
		count++;
	}
	else
		count = basehexa(ptr, 0);
	return (count);
}

size_t	basehexa(uintptr_t num, int up)
{
	static size_t	count;

	count = 0;
	if (num >= 16)
		basehexa(num / 16, up);
	if (up == 0)
	{
		ft_putchar_fd("0123456789abcdef"[num % 16], 1);
		count++;
	}
	else
	{
		ft_putchar_fd("0123456789ABCDEF"[num % 16], 1);
		count++;
	}
	return (count);
}
