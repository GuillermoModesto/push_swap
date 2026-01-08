/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:00:45 by guantino          #+#    #+#             */
/*   Updated: 2026/01/08 17:18:39 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int	num;
	int	*struct s_stack;
	int	*struct s_stack;
}	t_stack;

void	sa(t_stack a, t_stack b);
void	sb(t_stack a, t_stack b);
void	ss(t_stack a, t_stack b);
void	pa(t_stack a, t_stack b);
void	pb(t_stack a, t_stack b);
void	ra(t_stack a, t_stack b);
void	rb(t_stack a, t_stack b);
void	rr(t_stack a, t_stack b);
void	rra(t_stack a, t_stack b);
void	rrb(t_stack a, t_stack b);
void	rrr(t_stack a, t_stack b);

#endif
