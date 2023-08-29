/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:03:34 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/29 14:41:17 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int	main(void)
{
	char c = '!';
	char *str = "Now I can print strings";
	int nbr = 42;

	assert(ft_printf("") == printf(""));
	assert(ft_printf(NULL) == printf(NULL));
	assert(ft_printf("Hello World%c\n", '!') == printf("Hello World%c\n", '!'));
	assert(ft_printf("%s%c\n", str, c) == printf("%s%c\n", str, c));
	assert(ft_printf("%i | %d\n", nbr, -nbr) == printf("%i | %d\n", nbr, -nbr));
	printf("all tests passed");
	return (0);
}
