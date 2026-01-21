/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 12:20:20 by guantino          #+#    #+#             */
/*   Updated: 2026/01/21 12:20:23 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static int	is_number(char *s)
{
	int	i;
	
	if (!s || !*s)
		return (0);
	i = 0;
	if (s[i] == '+' || s[i] == '-')
		i++;
	if (!s[i])
		return (0);
	while (s[i] &&
		((s[i] >= '0' && s[i] <= '9') || s[i] == '-' || s[i] == '+'))
		i++;
	if (!s[i])
		return (1);
	return (0);
}

static int	ft_atoi_with_check(char *nptr, int *res)
{
	int	i;
	int	sign;
	long	num;

	i = 0;
	sign = 1;
	num = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - '0');
		if ((sign == 1 && num > 2147483647) 
			|| (sign == -1 && num > 2147483648))
			return (0);
		i++;
	}
	*res = ((int)num * sign);
	return (1);
}

static int	check_numbers(char **input)
{
	int	i;
	int	is_num;
	
	i = 0;
	is_num = 1;
	while(input[i] && (is_num = is_number(input[i])))
		i++;
	return (is_num);
}

static int	check_duplicates (t_stack *a)
{
	t_stack	*current;
	t_stack	*compare;
	
	current = a;
	compare = a->next;
	while(current)
	{
		compare = current->next;
		while(compare)
		{
			if (current->num == compare->num)
				return (0);
			compare = compare->next;
		}
		current = current->next;
	}
	return (1);
}

int	parse_and_check(char **input, t_stack **a)
{
	int	i;
	int	aux;
	int	error;
	
	aux = 0;
	i = 0;
	error = 1;
	if (!check_numbers(input))
		return (0);
	while(input[i] && (error = ft_atoi_with_check(input[i], &aux)))
	{
		ft_lstadd_back(a, ft_lstnew(aux));
		i++;
	}
	if (!error || !check_duplicates(*a))
	{
		free_all(*a, NULL);
		return (0);
	}

	return (1);
}
