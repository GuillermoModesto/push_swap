/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:51:43 by guantino          #+#    #+#             */
/*   Updated: 2026/02/20 12:52:11 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	get_index(t_stack *a)
{
	int	index;
	t_stack	*aux;
	t_stack	*cmp;
	
	aux = a;
	while (aux)
	{
		index = 0;
		cmp = a;
		while (cmp)
		{
			if (aux->num > cmp->num)
				index++;
			cmp = cmp->next;
		}
		aux->index = index;
		aux = aux->next;
	}
}

int	max_bits(int n)
{
	int	bits;
	int	max;
	
	bits = 0;
	max = n - 1;
	while ((max >> bits) != 0)
		bits++;
	return bits;
}
