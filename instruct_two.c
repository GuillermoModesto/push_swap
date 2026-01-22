/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruct_two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:19:40 by guantino          #+#    #+#             */
/*   Updated: 2026/01/09 14:09:30 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*first;
	t_stack	*last;
	
	first = *a;
	last = ft_lstlast(*a);
	*a = (*a)->next;
	last->next = first;
	first->next = NULL;
}

void	rb(t_stack **b)
{
	t_stack	*first;
	t_stack	*last;
	
	first = *b;
	last = ft_lstlast(*b);
	*b = (*b)->next;
	last->next = first;
	first->next = NULL;
}

void	rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
}
