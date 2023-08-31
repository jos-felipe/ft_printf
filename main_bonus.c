/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:03:34 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/31 11:05:18 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int	main(void)
{
	int nbr;

	nbr = 42;
	assert(ft_printf("%#x | %#X\n", nbr, nbr) == printf("%#x | %#X\n", nbr, nbr));
	nbr = 0;
	assert(ft_printf("%#x | %#X\n", nbr, nbr) == printf("%#x | %#X\n", nbr, nbr));
	printf("all tests passed\n");
	return (0);
}
