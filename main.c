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
	{
		display_error();
		return (3);
	}

	// for TESTING only
	parse_and_check(ft_split(argv[1], ' '), &stack_b);
	
	ft_printf("\n -> Original:\n");
	print_stacks(stack_a, stack_b);
	ft_printf("\n");
	
	ft_printf("\n -> sa (swap first two elements of a):\n");
	sa(&stack_a, 0);
	print_stacks(stack_a, stack_b);
	ft_printf("\n");
	
	ft_printf("\n -> sb (swap first two elements of b):\n");
	sb(&stack_b, 0);
	print_stacks(stack_a, stack_b);
	ft_printf("\n");
	
	ft_printf("\n -> ss (do sa and sb):\n");
	ss(&stack_a, &stack_b);
	print_stacks(stack_a, stack_b);
	
	ft_printf("\n -> pa (take first of b and put it on top of a):\n");
	pa(&stack_a, &stack_b);
	print_stacks(stack_a, stack_b);

	ft_printf("\n -> pb (take first of a and put it on top of b):\n");
	pb(&stack_a, &stack_b);
	print_stacks(stack_a, stack_b);
	
	ft_printf("\n -> ra (shift up all elements of stack a by 1):\n");
	ra(&stack_a, 0);
	print_stacks(stack_a, stack_b);
	
	ft_printf("\n -> rb (shift up all elements of stack b by 1):\n");
	rb(&stack_b, 0);
	print_stacks(stack_a, stack_b);
	
	ft_printf("\n -> rr (do ra and rb):\n");
	rr(&stack_a, &stack_b);
	print_stacks(stack_a, stack_b);
	
	ft_printf("\n -> rra (shift down all elements of stack a by 1):\n");
	rra(&stack_a, 0);
	print_stacks(stack_a, stack_b);
	
	ft_printf("\n -> rrb (shift down all elements of stack b by 1):\n");
	rrb(&stack_b, 0);
	print_stacks(stack_a, stack_b);
	
	ft_printf("\n -> rrr (do rra and rrb):\n");
	rrr(&stack_a, &stack_b);
	print_stacks(stack_a, stack_b);
}
