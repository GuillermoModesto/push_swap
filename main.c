/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:31:33 by guantino          #+#    #+#             */
/*   Updated: 2026/01/21 17:34:08 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	array_len(char **a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int		i;
	t_stack	*a;
	t_stack	*b;
	char	**params;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (1);
	i = 1;
	while (i < argc)
	{
		if (!argv[i][0])
			return (display_error(), 2);
		params = ft_split(argv[i], ' ');
		if (!parse_and_check(params, &a))
			return (mega_free(params, array_len(params)),
				free_all(a, b), display_error(), 3);
		mega_free(params, array_len(params));
		i++;
	}
	if (!is_sorted(a))
		sort_stacks(&a, &b);
	return (free_all(a, b), 0);
}
