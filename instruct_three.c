/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruct_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:19:57 by guantino          #+#    #+#             */
/*   Updated: 2026/02/06 13:32:58 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	rra(t_stack **a)
{
	t_stack	*first;
	t_stack	*sec_to_last;
	t_stack	*last;

	if (!a || !(*a) || !(*a)->next)
		return ;
	first = *a;
	last = ft_lstlast(*a);
	sec_to_last = ft_lstsectolast(*a);
	*a = last;
	sec_to_last->next = NULL;
	last->next = first;
}

void	rrb(t_stack **b)
{
	t_stack	*first;
	t_stack	*sec_to_last;
	t_stack	*last;

	if (!b || !(*b) || !(*b)->next)
		return ;
	first = *b;
	last = ft_lstlast(*b);
	sec_to_last = ft_lstsectolast(*b);
	*b = last;
	sec_to_last->next = NULL;
	last->next = first;
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
}
