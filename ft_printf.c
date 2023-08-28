/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:53:31 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/28 10:32:07 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*int	ft_parse(const char *str)
{
	int	i;

	i = 1;
	if (str[i] == 'c')
		ft_putchar(va_arg(ap, int));
	else if (str[i] == 's')
		ft_putstr(va_arg(ap, char *));
	else if (str[i] == 'p')
		ft_putptr(va_arg(ap, void *));
	else if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr(va_arg(ap, int));
	else if (str[i] == 'u')
		ft_putunbr(va_arg(ap, unsigned int));
	else if (str[i] == 'x')
		ft_puthex(va_arg(ap, unsigned int), 0);
	else if (str[i] == 'X')
		ft_puthex(va_arg(ap, unsigned int), 1);
	else if (str[i] == '%')
		ft_putchar('%');
	else
		return (0);
	return (i);
} */

int	ft_printf(const char *str, ...)
{
	int	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
		// if (str[i] == '%')
		// 	i += ft_parse(str + i);
		// else
		count = ft_putchar(str[i]);
		i++;
	return (count);
}