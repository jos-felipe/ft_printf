/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:53:31 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/30 14:20:25 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(const char *str, va_list ap)
{
	int	offset;

	offset = 0;
	if (*str == 'c')
		offset = ft_putchar(va_arg(ap, int));
	else if (*str == 's')
		offset = ft_putstr(va_arg(ap, char *));
	else if (*str == 'd' || *str == 'i')
		offset = ft_putnbr(va_arg(ap, int));
	else if (*str == 'u')
		offset = ft_putunbr(va_arg(ap, unsigned int));
	else if (*str == 'x')
		offset = ft_puthex(va_arg(ap, unsigned int), 0);
	else if (*str == 'X')
		offset = ft_puthex(va_arg(ap, unsigned int), 1);
	else if (*str == 'p')
		offset = ft_putptr(va_arg(ap, void *));
	else if (*str == '%')
		offset = ft_putchar('%');
	return (offset);
}

int	ft_printf(const char *str, ...)
{
	int		printed;
	int		offset;
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