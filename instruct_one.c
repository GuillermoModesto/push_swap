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

#include "pushswap.h"
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
	/*
	int	aux;
	
	aux = (*a)->num;
	(*a)->num = (*b)->num;
	(*b)->num = aux;
	*/
	if (!b || !(*b))
		return ;
	ft_lstadd_front(a, ft_lstnew((*b)->num));
	
}
// (take first of a and put it on top of b)
/*
void	pb(t_stack **a, t_stack **b)
{
	if (!a || !(*a))
		return ;
	
}
*/
