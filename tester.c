/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:03:34 by josfelip          #+#    #+#             */
/*   Updated: 2023/09/04 13:24:14 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int	main(void)
{
	char *str = NULL;
    char *str2 = "Hello, World! =)";
    char c = 'H';
    int num = 0;
    int num2 = 10;
    int num3 = 14;
    int num4 = 1998;
    int num5 = 'G';

    ft_printf("QUE INICIEM OS TESTES\n\n");

    ft_printf("Char: %c\n", c);
    printf("Original: %c\n\n", c);

    ft_printf("String: %s, %s\n",str, str2);
    printf("Original: %s, %s\n\n",str, str2);

    printf("\nBonus - Plus & Space - Integer\n");
	assert(	ft_printf("T: % +d, %+ d, % d, % d\n", num, num2, num3, num4)\
			== printf("R: % +d, %+ d, % d, % d\n", num, num2, num3, num4));
	
    ft_printf("Unsigned: %u, %u, %u, %u\n", num, num2, num3, num4);
    printf("Original: %u, %u, %u, %u\n\n", num, num2, num3, num4);

    ft_printf("HEX_LOW: %x, %x, %x, %x\n", num2, str, num4, str2);
    printf("Original: %x, %x, %x, %x\n\n", num2, str, num4, str2);

    ft_printf("HEX_LOW: %#X, %#X, %X, %X\n", num2, str, num4, str2);
    printf("Original: %#X, %#X, %X, %X\n\n", num2, str, num4, str2);

    ft_printf("Percent: %%\n");
    printf("Original: %%\n\n");

    ft_printf ("Endereço: %p, %p, %p, %p, %p\n", num, num3, num4, str, str2);
    printf ("Original: %p, %p, %p, %p, %p\n", num, num3, num4, str, str2);

    ft_printf ("%d, %d, %d, %d, %d\n", 25, 25, 25, 25, 25);
    printf ("%d, %d, %d, %d, %d\n", 25, 25, 25, 25, 25);

    return (0);
}
