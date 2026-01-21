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
	
	i = 0;
	while (s[i] && s[i] >= '0' && s[i] <= '9')
		i++;
	if (!s[i])
		return (1);
	return (0);
}

int	check_numbers(char **input)
{
	int	i;
	int	is_num;
	
	i = 0;
	is_num = 1;
	while(input[i] && (is_num = is_number(input[i])))
		i++;
	return (is_num);
}
/*
int	check_errors(char **input)
{
	if (!check_for_numbers(input) || 
}*/
