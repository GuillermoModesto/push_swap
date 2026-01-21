#include "push_swap.h"

int main(int argc, char **argv)
{
	char	**input;
	int	i;
	
	if (argc < 2)
		return (1);
	i = 0;
	input = ft_split(argv[1], ' ');
	
	while(input[i])
	{
		ft_printf("%s ", input[i]);
		i++;
	}
	
	if (!check_numbers(input))
		display_error();
	/*
	t_stack *stack_a = ft_lstnew(1);
	ft_lstadd_front(&stack_a, ft_lstnew(3));
	ft_lstadd_front(&stack_a, ft_lstnew(5));
	ft_lstadd_front(&stack_a, ft_lstnew(7));
	ft_lstadd_front(&stack_a, ft_lstnew(9));
	
	t_stack *stack_b = ft_lstnew(2);
	ft_lstadd_front(&stack_b, ft_lstnew(4));
	ft_lstadd_front(&stack_b, ft_lstnew(6));
	ft_lstadd_front(&stack_b, ft_lstnew(8));
	
	ft_printf(" -> Original:\n");
	print_stacks(stack_a, stack_b);
	ft_printf("\n");
	
	// sa sb (swap first two elements of a or b)
	ft_printf(" -> sa:\n");
	sa(&stack_a);
	print_stacks(stack_a, stack_b);
	ft_printf("\n");
	
	ft_printf(" -> sb:\n");
	sb(&stack_b);
	print_stacks(stack_a, stack_b);
	ft_printf("\n");
	
	// ss (do sa and sb)
	ft_printf(" -> ss:\n");
	ss(&stack_a, &stack_b);
	print_stacks(stack_a, stack_b);
	
	// pa (take first of b and put it on top of a)
	ft_printf(" -> pa:\n");
	pa(&stack_a, &stack_b);
	print_stacks(stack_a, stack_b);
	
	// pb (take first of a and put it on top of b)
	ft_printf(" -> pb:\n");
	pb(&stack_a, &stack_b);
	print_stacks(stack_a, stack_b);
	*/
	
}
