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

void	ss(t_stack **a, t_stack **b)
{
	sa(a);
	sb(b);
}

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
/*
void	pb(t_stack **a, t_stack **b)
{
	if (!a || !(*a))
		return ;
	
}
*/
