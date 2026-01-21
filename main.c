/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:31:33 by guantino          #+#    #+#             */
/*   Updated: 2026/01/21 17:34:08 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (1);
	if (!argv[1][0])
	{
		display_error();
		return (2);
	}
	i = 0;
	if (!parse_and_check(ft_split(argv[1], ' '), &stack_a))
		display_error();
	else
	{
		print_stacks(stack_a, stack_b);
		free_all(stack_a, stack_b);
	}
	/*
	ft_printf(" -> Original:\n");
	print_stacks(stack_a, stack_b);
	ft_printf("\n");
	
	// sa sb (swap first two elements of a or b)
	ft_printf(" -> sa:\n");
	sa(&stack_a);
	print_stacks(stack_a, stack_b);
	ft_printf("\n");
	
	ft_printf(" -> sb:\n");
	sb(&stack_b);
	print_stacks(stack_a, stack_b);
	ft_printf("\n");
	
	// ss (do sa and sb)
	ft_printf(" -> ss:\n");
	ss(&stack_a, &stack_b);
	print_stacks(stack_a, stack_b);
	
	// pa (take first of b and put it on top of a)
	ft_printf(" -> pa:\n");
	pa(&stack_a, &stack_b);
	print_stacks(stack_a, stack_b);
	
	// pb (take first of a and put it on top of b)
	ft_printf(" -> pb:\n");
	pb(&stack_a, &stack_b);
	print_stacks(stack_a, stack_b);
	*/	
}
