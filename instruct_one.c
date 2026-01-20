/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruct_one.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:19:14 by guantino          #+#    #+#             */
/*   Updated: 2026/01/09 14:15:58 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// (swap first two elements of a)
void	sa(t_stack **a)
{
	t_stack *first;
	t_stack *second;

	if (!a || !(*a) || !(*a)->next)
		return ;
	first = *a;
	second = (*a)->next;
	first->next = second->next;
	second->next = first;
	*a = second;
}
// (swap first two elements of b)
void	sb(t_stack **b)
{
	t_stack *first;
	t_stack *second;

	if (!b || !(*b) || !(*b)->next)
		return ;
	first = *b;
	second = (*b)->next;
	first->next = second->next;
	second->next = first;
	*b = second;
}
// (do sa and sb)
void	ss(t_stack **a, t_stack **b)
{
	sa(a);
	sb(b);
}
// (take first of b and put it on top of a)
void	pa(t_stack **a, t_stack **b)
{
	t_stack	*aux;
	
	aux = *b;
	if (!b || !(*b))
		return ;
	*b = (*b)->next;
	aux->next = *a;
	*a = aux;
}
// (take first of a and put it on top of b)
void	pb(t_stack **a, t_stack **b)
{
	t_stack	*aux;
	
	aux = *a;
	if (!a || !(*a))
		return ;
	*a = (*a)->next;
	aux->next = *b;
	*b = aux;
}

