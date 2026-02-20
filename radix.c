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
	int	n;
	int	bits;
	int	bit;
	int	i;

	n = ft_lstsize(*a);
	bits = max_bits(n);
	bit = 0;
	get_index(*a);
	while (bit < bits)
	{
		i = 0;
		while (i < n)
		{
			if ((((*a)->index >> bit) & 1) == 0)
				pb(a, b);
			else
				ra(a, 0);
			i++;
		}
		while (*b)
			pa(a, b);
		bit++;
	}
}
