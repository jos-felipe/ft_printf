/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:53:31 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/30 12:34:42 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(char c)
{
	write(1, &c, sizeof(char));
	return (1);
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

int	ft_putunbr(unsigned int nbr)
{
	int	offset;

	offset = 0;
	if (nbr < 10)
		offset += ft_putchar(nbr + '0');
	else
	{
		offset += ft_putunbr(nbr / 10);
		offset += ft_putunbr(nbr % 10);
	}
	return (offset);
}

int	ft_puthex(unsigned long int hex, int case_flag)
{
	int	offset;

	offset = 0;
	if (hex < 16)
	{
		if (hex < 10)
			offset += ft_putchar(hex + '0');
		else if (case_flag)
			offset += ft_putchar(hex - 10 + 'A');
		else
			offset += ft_putchar(hex - 10 + 'a');
	}
	else
	{
		offset += ft_puthex(hex / 16, case_flag);
		offset += ft_puthex(hex % 16, case_flag);
	}
	return (offset);
}

int	ft_putptr(void *ptr)
{
	int	offset;

	offset = 0;
	offset += ft_putstr("0x");
	offset += ft_puthex((unsigned long int)ptr, 0);
	return (offset);
}