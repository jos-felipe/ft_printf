/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:03:34 by josfelip          #+#    #+#             */
/*   Updated: 2023/09/01 18:31:58 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int	main(void)
{
	// Mandatory part
	char 	c = '!';
	char 	*str = "Now I can print strings";
	int		nbr = 42;

	assert(ft_printf("") == printf(""));
	assert(ft_printf(NULL) == printf(NULL));
	assert(ft_printf("Hello World%c\n", '!') == printf("Hello World%c\n", '!'));
	assert(ft_printf("%s%c\n", str, c) == printf("%s%c\n", str, c));
	str = NULL;
	assert(ft_printf("%s\n", str) == printf("%s\n", str));
	assert(ft_printf("%i | %d\n", nbr, -nbr) == printf("%i | %d\n", nbr, -nbr));
	assert(ft_printf("%u | %u\n", nbr, -nbr) == printf("%u | %u\n", nbr, -nbr));
	assert(ft_printf("%x | %X\n", nbr, nbr) == printf("%x | %X\n", nbr, nbr));
	assert(ft_printf("%p\n", &nbr) == printf("%p\n", &nbr));
	assert(ft_printf("%p\n", NULL) == printf("%p\n", NULL));
	assert(ft_printf("%%\n") == printf("%%\n"));
	
	// Bonus part
	nbr = 42;
	str = "\0";
	assert(ft_printf("%#x | %#X\n", nbr, nbr) == printf("%#x | %#X\n", nbr, nbr));
	assert(ft_printf("%##x | %##X\n", nbr, nbr) == printf("%##x | %##X\n", nbr, nbr));
	assert(ft_printf("% i\n", nbr) == printf("% i\n", nbr));
	assert(ft_printf("% i\n", -nbr) == printf("% i\n", -nbr));
	assert(ft_printf("%+i\n", nbr) == printf("%+i\n", nbr));
	nbr = 0;
	assert(ft_printf("%#x | %#X\n", nbr, nbr) == printf("%#x | %#X\n", nbr, nbr));
	assert(ft_printf("_%s_\n", "") == printf("_%s_\n", ""));
	// assert(ft_printf("_% s_\n", "") == printf("_% s_\n", ""));
	printf("all tests passed\n");
	return (0);
}
