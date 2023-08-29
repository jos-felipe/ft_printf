/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:53:31 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/29 10:12:17 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_parse(const char *str, va_list ap)
{
	int	offset;

	offset = 0;
	if (*str == 'c')
		offset = ft_putchar(va_arg(ap, int));
	else if (*str == 's')
		offset = ft_putstr(va_arg(ap, char *));
	// else if (str[i] == 'p')
	// 	ft_putptr(va_arg(ap, void *));
	// else if (str[i] == 'd' || str[i] == 'i')
	// 	ft_putnbr(va_arg(ap, int));
	// else if (str[i] == 'u')
	// 	ft_putunbr(va_arg(ap, unsigned int));
	// else if (str[i] == 'x')
	// 	ft_puthex(va_arg(ap, unsigned int), 0);
	// else if (str[i] == 'X')
	// 	ft_puthex(va_arg(ap, unsigned int), 1);
	// else if (str[i] == '%')
	// 	ft_putchar('%');
	return (offset);
}

int	ft_printf(const char *str, ...)
{
	int	printed;
	int	offset;
	va_list	ap;

	if (!str)
		return (-1);
	va_start(ap, str);
	printed = 0;
	offset = 0;
	while (*str)
	{
		if (*str == '%')
			offset = ft_parse(++str, ap);
		else
			offset = ft_putchar(*str);
		printed += offset;
		str++;
	}
	va_end(ap);
	return (printed);
}