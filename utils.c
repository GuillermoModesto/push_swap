/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:17:18 by guantino          #+#    #+#             */
/*   Updated: 2026/01/12 12:19:26 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_stack	*ft_lstnew(int num)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->num = num;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

int	ft_lstsize(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

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
