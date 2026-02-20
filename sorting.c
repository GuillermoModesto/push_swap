/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:12:51 by guantino          #+#    #+#             */
/*   Updated: 2026/02/06 14:13:24 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sort_stacks(t_stack **a, t_stack **b)
{
	int	size;

	size = ft_lstsize(*a);
	(void)b;
	if (size == 0 || size == 1)
		return ;
	else if (size == 2)
		sort_two(a);
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	else if (size == 5)
		sort_five(a, b);
	else
		radix_sort(a, b);
}

void	sort_two(t_stack **a)
{
	if ((*a)->num > (*a)->next->num)
		sa(a, 0);
}

void	sort_three(t_stack **a)
{
	int	x;
	int	y;
	int	z;

	x = (*a)->num;
	y = (*a)->next->num;
	z = (*a)->next->next->num;
	if ((x > y) && (y < z) && (x < z))
		sa(a, 0);
	else if ((x > y) && (y > z))
	{
		sa(a, 0);
		rra(a, 0);
	}
	else if ((x > y) && (y < z) && (x > z))
		ra(a, 0);
	else if ((x < y) && (y > z) && (x < z))
	{
		sa(a, 0);
		ra(a, 0);
	}
	else if ((x < y) && (y > z) && (x > z))
		rra(a, 0);
}

void	sort_four(t_stack **a, t_stack **b)
{
	int	smallest;

	smallest = get_smallest(*a);
	pop_smallest_four(a, b, smallest);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	smallest;

	smallest = get_smallest(*a);
	pop_smallest_five(a, b, smallest);
	smallest = get_smallest(*a);
	pop_smallest_four(a, b, smallest);
	sort_three(a);
	pa(a, b);
	pa(a, b);
}
