/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:03:34 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/31 13:58:42 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int	main(void)
{
	int		nbr;
	char	*str;

	nbr = 42;
	str = "\0";
	assert(ft_printf("%#x | %#X\n", nbr, nbr) == printf("%#x | %#X\n", nbr, nbr));
	assert(ft_printf("%##x | %##X\n", nbr, nbr) == printf("%##x | %##X\n", nbr, nbr));
	assert(ft_printf("% i\n", nbr) == printf("% i\n", nbr));
	assert(ft_printf("%+i\n", nbr) == printf("%+i\n", nbr));
	nbr = 0;
	assert(ft_printf("%#x | %#X\n", nbr, nbr) == printf("%#x | %#X\n", nbr, nbr));
	printf("all tests passed\n");
	return (0);
}
