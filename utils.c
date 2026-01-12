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
#include "pushswap.h"

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

void	print_stack(t_stack *s)
{
	while (s)
	{
		ft_printf("%d ", s->num);
		s = s->next;
	}
}
