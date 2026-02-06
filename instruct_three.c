/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruct_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:19:57 by guantino          #+#    #+#             */
/*   Updated: 2026/01/09 14:09:56 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	rra(t_stack **a)
{
	t_stack	*first;
	t_stack *sec_to_last;
	t_stack	*last;
	
	first = *a;
	last = ft_lstlast(*a);
	sec_to_last = ft_lstsectolast(*a);
	
}
/*
void	rrb(t_stack **b)
{

}

void	rrr(t_stack **a, t_stack **b)
{

}*/
