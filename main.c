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
	sort_stacks(&stack_a, &stack_b);
}
