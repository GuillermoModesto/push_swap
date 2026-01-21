/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:38:35 by guantino          #+#    #+#             */
/*   Updated: 2026/01/21 15:38:37 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	free_all(t_stack *a, t_stack *b)
{
	t_stack	*aux;
	
	aux = NULL;
	while (a)
	{
		aux = a->next;
		free(a);
		a = aux;
	}
	while (b)
	{
		aux = b->next;
		free(b);
		b = aux;
	}
}
