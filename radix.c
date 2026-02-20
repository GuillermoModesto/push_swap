/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:29:42 by guantino          #+#    #+#             */
/*   Updated: 2026/02/20 12:30:34 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	radix_sort(t_stack **a, t_stack **b)
{
	(void)b;
	get_index(*a);
	while (*a)
	{
		ft_printf("%d\n", (*a)->index);
		(*a) = (*a)->next;
	}
}	
