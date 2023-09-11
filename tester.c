/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:03:34 by josfelip          #+#    #+#             */
/*   Updated: 2023/09/04 15:38:40 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>

int	main(void)
{
	char *s = "Hello, World! =)";
    char c = 'H';
    int d = 0;
    int i = INT_MIN;
    int u = -1;
    int x = 0xaf;
    int X = 0x0;

	printf("\nMandatory - cspdiuxX%% \n");
	assert(ft_printf("T: %c, %s, %p, %d, %i, %u, %x, %X, %%\n", c, s, s, d, i, u, -x, X)\
	== printf("R: %c, %s, %p, %d, %i, %u, %x, %X, %%\n", c, s, s, d, i, u, -x, X));

	printf("\nMandatory - Limits \n");
	assert(ft_printf("%p\n", NULL) == printf("%p\n", NULL));
	assert(ft_printf("") == printf(""));
	assert(ft_printf(NULL) == printf(NULL));
			
    printf("\nBonus - Hashtag, Plus & Space\n");
	assert(ft_printf("T: % d, %+ d, %#x, %x\n", d, d, x, x)\
			== printf("R: % d, %+ d, %#x, %x\n", d, d, x, x));
	assert(ft_printf("_% s_\n", "") == printf("_% s_\n", ""));
			
	printf("Sucesso!");

    return (0);
}

