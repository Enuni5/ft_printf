/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printdigits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:29:52 by enunez-n          #+#    #+#             */
/*   Updated: 2022/05/31 11:35:59 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printnumber(va_list args)
{
	size_t	count;

	count = 0;
	ft_putnbr_fd(va_arg(args, int), 1);
	return (count);
}
