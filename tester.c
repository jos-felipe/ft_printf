/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:03:34 by josfelip          #+#    #+#             */
/*   Updated: 2023/09/04 15:20:59 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int	main(void)
{
	char *s = "Hello, World! =)";
    char c = 'H';
    int d = 0;
    int i = __INT_MAX__ + 1;
    int u = -1;
    int x = 0xaf;
    int X = 0x0;

    printf("\nMandatory - cspdiuxX%% \n");
	assert(ft_printf("T: %c, %s, %p, %d, %i, %u, %x, %X, %%\n", c, s, s, d, i, u, x, X)\
	== printf("R: %c, %s, %p, %d, %i, %u, %x, %X, %%\n", c, s, s, d, i, u, x, X));
			
    printf("\nBonus - Hashtag, Plus & Space\n");
	assert(ft_printf("T: % d, %+ d, %#x, %x\n", d, d, x, x)\
			== printf("R: % d, %+ d, %#x, %x\n", d, d, x, x));
			
	printf("Sucesso!");

    return (0);
}

