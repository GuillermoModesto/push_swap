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
