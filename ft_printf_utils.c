/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:53:31 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/29 14:37:55 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(char c)
{
	write(1, &c, sizeof(char));
	return (sizeof(char));
}

int	ft_putstr(char *str)
{
	int	offset;

	offset = 0;
	if (!str)
		return (-1);
	while (*str)
		offset += ft_putchar(*str++);
	return (offset);
}

int	ft_putnbr(int n)
{
	int			offset;
	long int	nbr;

	offset = 0;
	nbr = (long int)n;
	if (n < 0)
	{
		nbr *= -1;
		offset += ft_putchar('-');
	}
	if (nbr < 10)
		offset += ft_putchar(nbr + '0');
	else
	{
		offset += ft_putnbr(nbr / 10);
		offset += ft_putnbr(nbr % 10);
	}
	return (offset);
}