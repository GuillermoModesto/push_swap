/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:00:45 by guantino          #+#    #+#             */
/*   Updated: 2026/02/13 14:29:47 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				num;
	int				index;
	struct s_stack	*next;
}	t_stack;

char	**ft_split(char const *s, char c);

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_puthexnbr(unsigned long num, int cap);
int		ft_putnbr(int num);
int		ft_putunbr(unsigned int num);
int		ft_putvoid(void *ptr);
void	print_stacks(t_stack *a, t_stack *b);
void	display_error(void);
int		parse_and_check(char **input, t_stack **a);
void	free_all(t_stack *a, t_stack *b);

void	sa(t_stack **a, int from_ss);
void	sb(t_stack **b, int from_ss);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a, int from_rr);
void	rb(t_stack **b, int from_rr);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a, int from_rrr);
void	rrb(t_stack **b, int from_rrr);
void	rrr(t_stack **a, t_stack **b);

void	sort_stacks(t_stack **a, t_stack **b);
void	sort_two(t_stack **a);
void	sort_three(t_stack **a);
void	sort_four(t_stack **a, t_stack **b);
void	sort_five(t_stack **a, t_stack **b);
void	radix_sort(t_stack **a, t_stack **b);
void	get_index(t_stack *a);
int		max_bits(int n);

int		get_smallest(t_stack *s);
void	pop_smallest_four(t_stack **a, t_stack **b, int smallest);
void	pop_smallest_five(t_stack **a, t_stack **b, int smallest);

t_stack	*ft_lstnew(int num);
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstsectolast(t_stack *lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
int		ft_lstsize(t_stack *stack);

#endif
