/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:40:07 by sdukic            #+#    #+#             */
/*   Updated: 2022/12/06 19:29:48 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "./include/libft.h"
#include "./include/ft_printf.h"
#include "./include/pushswap.h"

void	print_stack(t_stack stack)
{
	int	i;

	i = stack.length - 1;
	while (i >= 0)
	{
		ft_printf("%d ", stack.stack[i]);
		i --;
	}
	ft_printf("\n");
}

int	main(int argc, char *argv[])
{
	char	*stack_arg;
	t_stack	stack_a;

	(void)argc;
	stack_arg = argv[1];
	stack_a = create_stack_a(argv, argc);
	print_stack(stack_a);
	stack_a = sort_stack_a(stack_a);
	print_stack(stack_a);
	free(stack_a.stack);
	return (0);
}
