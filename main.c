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

int	array_len(char **a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int		i;
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**params;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (1);
	i = 1;
	while (i < argc)
	{
		if (!argv[i][0])
			return (display_error(), 2);
		params = ft_split(argv[i], ' ');
		if (!parse_and_check(params, &stack_a))
		{
			mega_free(params, array_len(params));
			return (free_all(stack_a, stack_b), display_error(), 3);
		}
		mega_free(params, array_len(params));
		i++;
	}
	sort_stacks(&stack_a, &stack_b);
	free_all(stack_a, stack_b);
}
