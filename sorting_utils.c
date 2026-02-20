/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:12:08 by guantino          #+#    #+#             */
/*   Updated: 2026/02/11 16:12:31 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	get_smallest(t_stack *s)
{
	int	smallest;

	smallest = s->num;
	while (s)
	{
		if (s->num < smallest)
			smallest = s->num;
		s = s->next;
	}
	return (smallest);
}

void	pop_smallest_four(t_stack **a, t_stack **b, int smallest)
{
	if ((*a)->next->num == smallest)
		ra(a, 0);
	else if ((*a)->next->next->num == smallest)
	{
		ra(a, 0);
		ra(a, 0);
	}
	else if ((*a)->next->next->next->num == smallest)
		rra(a, 0);
	pb(a, b);
}

void	pop_smallest_five(t_stack **a, t_stack **b, int smallest)
{
	if ((*a)->next->num == smallest)
		ra(a, 0);
	else if ((*a)->next->next->num == smallest)
	{
		ra(a, 0);
		ra(a, 0);
	}
	else if ((*a)->next->next->next->num == smallest)
	{
		rra(a, 0);
		rra(a, 0);
	}
	else if ((*a)->next->next->next->next->num == smallest)
		rra(a, 0);
	pb(a, b);
}
