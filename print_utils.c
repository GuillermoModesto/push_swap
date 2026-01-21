/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:32:32 by guantino          #+#    #+#             */
/*   Updated: 2026/01/21 13:33:04 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	print_stacks(t_stack *a, t_stack *b)
{
	ft_printf("stack a:  |  stack b:\n");
	ft_printf("--------  |  --------\n");
	while (a && b)
	{
		ft_printf("   %d      |     %d     \n", a->num, b->num);
		a = a->next;
		b = b->next;
	}
	while (a)
	{
		ft_printf("   %d      |     -     \n", a->num);
		a = a->next;
	}
	while (b)
	{
		ft_printf("   -      |     %d     \n", b->num);
		a = a->next;
	}
	/*
	ft_printf("");
	ft_printf("|------|\n");
	while (a)
	{
		ft_printf("%d\n--------", b->num);
		b = b->next;
	}
	*/
}

void	display_error()
{
	write(2, "Error\n", 6);
}
