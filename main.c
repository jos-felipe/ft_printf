/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:03:34 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/28 15:10:11 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int	main(void)
{
	assert(ft_printf("Hello World!\n") == printf("Hello World!\n"));
	assert(ft_printf("") == printf(""));
	assert(ft_printf(NULL) == printf(NULL));
	assert(ft_printf("%c", 'a') == printf("%c", 'a'));
	printf("all tests passed");
	return (0);
}
